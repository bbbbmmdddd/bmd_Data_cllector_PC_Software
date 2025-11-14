#include "choose.h"
#include "dataprocessing.h"
#include "ui_choose.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QtWidgets/QMessageBox>

double Array[] = { 1,2,3,4,5,6,7,9,8,7,6,5,4,3,2,1 };

QSerialPort* COM = new QSerialPort();

bool opened = 0;

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
    for (int i = 0;i < sizeof(Array) / sizeof(double);i++) {
        series->append(i, Array[i]);
    }
}

Choose::~Choose()
{
    delete ui;
	delete ppage3;
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
        axisX->setTitleText("Time");
        axisX->setRange(0, sizeof(Array) / sizeof(double));
        axisX->setGridLineVisible(true);
        axisX->setTickCount(6);
        axisX->setMinorTickCount(5);
    }
    if (axisY == NULL) {
        axisY = new QValueAxis();
        axisY->setTitleText("N");
        axisY->setRange(0, 170);
        axisY->setGridLineVisible(true);
        axisY->setTickCount(22);
        axisY->setMinorTickCount(5);
    }

    chart->setTheme(QChart::ChartThemeDark);
    chart->legend()->setLabelColor(Qt::black);
    chart->setTitleBrush(QColor(255, 255, 255));
    chart->setBackgroundBrush(QColor(45, 45, 45));
    chart->addAxis(axisX, Qt::AlignBottom);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisX);
    series->attachAxis(axisY);
    chart->legend()->hide();
    ui->chartView->setChart(chart);
    ui->chartView->setRenderHint(QPainter::Antialiasing);

}

void Choose::pushButton_DataTest()
{
	qDebug() << "\nDataTest(){";
    this->hide();
    this->ppage3->show();
    qDebug() << "}";
}

void Choose::serialSend() {
    qDebug() << "SerialSend()";
    QString sendData = ui->textEdit_serialsend->toPlainText();
    sendData += "\r\n";
    COM->write(sendData.toLatin1());
}

void Choose::openSerial() {
    qDebug() << "OpenSerial()";
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

    QSerialPort::Parity parityValue;
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
}

void Choose::closeSerial() {
    qDebug() << "CloseSerial()";
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

}

void Choose::clearSerialReceive() {
    qDebug() << "ClearSerialReceive()";
}

void Choose::serialRest() {
    qDebug() << "SerialRest()";
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