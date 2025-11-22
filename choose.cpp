#include "choose.h"
#include "dataprocessing.h"
#include "ui_choose.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QtWidgets/QMessageBox>
#include <QTimer>
#include <QtGlobal>
#include <QDateTime>
#include <QRandomGenerator>

QSerialPort* COM = new QSerialPort();

Choose::Choose(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Choose)
{
    ui->setupUi(this);
    this->ppage3 = new DataProcessing;
	connect(this->ppage3, &DataProcessing::back_choose, this, [=]() {
		    this->ppage3->hide();
		    this->show();
	});

    Chart_init();
    timerUpdate();
    connect(COM,SIGNAL(readyRead()),this,SLOT(Serial_RX()));

    restTimer = new QTimer(this);
    restTimer->setInterval(10);
    connect(restTimer, &QTimer::timeout, this, &Choose::rest_Y);
    restTimer->start();
}

Choose::~Choose()
{
    delete ui;
	delete ppage3;
}

void Choose::timerUpdate()
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd hh:mm:ss dddd");
    ui->label_date->setText(str);
}

void Choose::Chart_init() {
    if (chart == NULL) {
        chart = new QChart();
    }
    if (series == NULL) {
        series = new QLineSeries();
        series->setName("N");
        chart->addSeries(series);
    }
    if (axisX == NULL) {
        axisX = new QValueAxis();
        //axisX->setTitleText("Time");
        axisX->setRange(0, 500);
        axisX->setGridLineVisible(true);
		axisX->setTickCount(11);//设置刻度线数量
        //axisX->setMinorTickCount(10);
    }
    if (axisY == NULL) {
        axisY = new QValueAxis();
        axisY->setTitleText("N");
        axisY->setRange(0, 50);
        axisY->setGridLineVisible(true);
        axisY->setTickCount(11);
        //axisY->setMinorTickCount(10);
    }

    chart->setTheme(QChart::ChartThemeDark);
    chart->legend()->setLabelColor(Qt::black);
    chart->setTitleBrush(QColor(255, 255, 255));
    chart->setBackgroundBrush(QColor(45, 45, 45));
    chart->addAxis(axisX, Qt::AlignBottom);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisX);
    series->attachAxis(axisY);
    //series->setUseOpenGL(true);
    chart->legend()->hide();
    ui->chartView->setChart(chart);
    ui->chartView->setRenderHint(QPainter::Antialiasing);

}

int cmpfunc(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

void Choose::rest_Y() {
    for (int i = 0; i < 499; i++) {
        Data_Temp[i] = Data[i];
    }
    qsort(Data_Temp, 500, sizeof(int), cmpfunc);
    timerUpdate();
    axisY->setRange(Data_Temp[1]-5, Data_Temp[498]+5);
}

void Choose::doRepaint(double y) {
    y_list.append(y);
    if (y_list.length() > 500) y_list.removeFirst();
    QList<QPointF> points;
    points.clear();
    for (int i = 0;i < y_list.length();i++){
        points.append(QPointF(i, y_list.at(i)));
    }
    series->replace(points);
}

void Choose::Serial_RX() {
    QByteArray buf = COM->readAll();
    if (!buf.isEmpty()) {
        QString str = tr(buf);
        ui->textEdit_serialreceive->insertPlainText(str);
        ui->textEdit_serialreceive->moveCursor(QTextCursor::End);
    }

    QByteArray lineBuf;
    lineBuf += buf;
    int idx;
    while ((idx = lineBuf.indexOf('\n')) >= 0) {
        QByteArray line = lineBuf.left(idx).trimmed();
        lineBuf.remove(0, idx + 1);
        Data_rx = line.split(' ').first().toDouble();
        rx_number++;
        ui->label_number->setText(QString::number(rx_number));
    }
    Data[Data_tail] = Data_rx;
	Data_tail = (Data_tail + 1) % 500;
    doRepaint(Data_rx);
}

void Choose::pushButton_DataTest() {
	qDebug() << "\nDataTest(){";
    this->hide();
    this->ppage3->show();
    qDebug() << "}";
}

void Choose::serialSend() {
    qDebug() << "\nSerialSend(){";
    QString sendData = ui->textEdit_serialsend->toPlainText();
    sendData += "\r\n";
    COM->write(sendData.toLatin1());
    qDebug() << "}";
}

void Choose::openSerial() {
    qDebug() << "\nOpenSerial(){";
    QString baudRate = ui->comboBox_baudrate->currentText();
    QString dataBits = ui->comboBox_databits->currentText();
    QString stopbits = ui->comboBox_stopbits->currentText();
    QString checkBits = ui->comboBox_parity->currentText();

    COM->setPortName(ui->comboBox_serialport->currentText());
    qint32 baudRateValue = baudRate.toInt();
    COM->setBaudRate(baudRateValue);
    QSerialPort::DataBits dataBitsValue = QSerialPort::DataBits(dataBits.toInt());
    COM->setDataBits(dataBitsValue);
    QSerialPort::StopBits stopBitsValue = QSerialPort::StopBits(stopbits.toInt());
    COM->setStopBits(stopBitsValue);

    QSerialPort::Parity parityValue = QSerialPort::NoParity;
    if (checkBits == "None") {
        parityValue = QSerialPort::NoParity;
    }
    else if (checkBits == "Even") {
        parityValue = QSerialPort::EvenParity;
    }
    else if (checkBits == "Odd") {
        parityValue = QSerialPort::OddParity;
    }
    else if (checkBits == "Mark") {
        parityValue = QSerialPort::MarkParity;
    }
    else if (checkBits == "Space") {
        parityValue = QSerialPort::SpaceParity;
    }
    COM->setParity(parityValue);
    if (!opened) {
        if (COM->open(QIODevice::ReadWrite)) {
            QFont font2;
            font2.setFamilies({ QString::fromUtf8("Share-TechMono") });
            font2.setPointSize(16);
            font2.setBold(false);
            font2.setKerning(true);
            ui->label_serialConnection->setFont(font2);
            ui->label_serialConnection->setStyleSheet("color:green;");
            ui->label_serialConnection->setText("已连接");
            opened = 1;
        }
        else {
            QMessageBox::information(this, "错误", "串口打开失败!\n请选择正确的串口或解除该串口被占用", QMessageBox::Yes);
        }
    }
    else {
        QMessageBox::information(this, "提示", "串口已打开", QMessageBox::Yes);
    }
    qDebug() << "}";
}

void Choose::closeSerial() {
    qDebug() << "\nCloseSerial(){";
    if (opened) {
        COM->close();
        QFont font2;
        font2.setFamilies({ QString::fromUtf8("Share-TechMono") });
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setKerning(true);
        ui->label_serialConnection->setFont(font2);
        ui->label_serialConnection->setStyleSheet("color:red;");
        ui->label_serialConnection->setText("未连接");
        opened = 0;
    }
    else {
        QMessageBox::information(this, "提示", "并未打开串口\n要先打开串口哦", QMessageBox::Yes);
    }
    qDebug() << "}";
}

void Choose::clearSerialReceive() {
    qDebug() << "\nclearSerialReceive(){";
	ui->textEdit_serialreceive->clear();
    rx_number = 0;
    ui->label_number->setText(QString::number(rx_number));
    qDebug() << "}";
}

void Choose::dataOpen() {
    qDebug() << "\ndataOpen(){";

    qDebug() << "}";
}

void Choose::dataClose() {
    qDebug() << "\ndataClose(){";

    qDebug() << "}";
}

void Choose::serialRest() {
    qDebug() << "\nserialRest(){";

    if (opened) {
        COM->close();
        QFont font2;
        font2.setFamilies({ QString::fromUtf8("Share-TechMono") });
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setKerning(true);
        ui->label_serialConnection->setFont(font2);
        ui->label_serialConnection->setStyleSheet("color:red;");
        ui->label_serialConnection->setText("未连接");
        opened = 0;
    }
    QFont font2;
    font2.setFamilies({ QString::fromUtf8("Share-TechMono") });
    font2.setPointSize(16);
    font2.setBold(false);
    font2.setKerning(true);
    ui->label_serialConnection->setFont(font2);
    ui->label_serialConnection->setStyleSheet("color:red;");
    ui->label_serialConnection->setText("未连接");
    ui->comboBox_serialport->clear();
    foreach(const QSerialPortInfo & info, QSerialPortInfo::availablePorts()) {
        ui->comboBox_serialport->addItem(info.portName());
        QString portInfo = info.portName() + " " + info.description();
        int index = ui->comboBox_serialport->count() - 1;
        ui->comboBox_serialport->setItemData(index, portInfo, Qt::ToolTipRole);
    }
    qDebug() << "}";
}

void Choose::labelRest() {
    QFont font2;
    font2.setFamilies({ QString::fromUtf8("Share-TechMono") });
    font2.setPointSize(16);
    font2.setBold(false);
    font2.setKerning(true);
    ui->label_remember->setFont(font2);
    ui->label_remember->setStyleSheet("color:red;");
    ui->label_remember->setText("有新的修改!");
}

void Choose::pushSetup() {
    QString num = "";
    QString nameFile = ui->lineEdit_m->text();
	num += "推力文件名称:" + nameFile + "\n";
    QFont font2;
    font2.setFamilies({ QString::fromUtf8("Share-TechMono") });
    font2.setPointSize(16);
    font2.setBold(false);
    font2.setKerning(true);
    ui->label_remember->setFont(font2);
    ui->label_remember->setStyleSheet("color:green;");
    ui->label_remember->setText("设置已上传");
    QMessageBox::information(this, "上传内容", num, QMessageBox::Yes);
}