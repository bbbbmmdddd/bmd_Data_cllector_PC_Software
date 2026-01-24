#include "choose_low.h"
#include "dataprocessing.h"
#include "ui_choose_low.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QtWidgets/QMessageBox>
#include <QTimer>
#include <QtGlobal>
#include <QDateTime>
#include <QRandomGenerator>
#include <QtCharts/QAreaSeries>

QSerialPort* COM2 = new QSerialPort();

Choose_Low::Choose_Low(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Choose_Low)
{
    ui->setupUi(this);
    this->ppage3 = new DataProcessing;
    connect(this->ppage3, &DataProcessing::back_choose, this, [=]() {
        this->ppage3->hide();
        this->show();
        });

    Chart_init();
    timerUpdate();
    connect(COM2, SIGNAL(readyRead()), this, SLOT(Serial_RX()));

    restTimer = new QTimer(this);
    restTimer->setInterval(10);
    connect(restTimer, &QTimer::timeout, this, &Choose_Low::rest_Y);
    restTimer->start();
}

Choose_Low::~Choose_Low()
{
    delete ui;
    delete ppage3;
}

void Choose_Low::timerUpdate()
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd hh:mm:ss dddd");
    ui->label_date_2->setText(str);
}

void Choose_Low::Chart_init() {
    if (chart == NULL) {
        chart = new QChart();
    }
    if (series == NULL) {//折线图
        series = new QLineSeries();
        series->setName("N");
        chart->addSeries(series);
    }
    if (series_area == NULL) {//面积图
        series_area = new QAreaSeries(series, 0);
        chart->addSeries(series_area);
    }
    if (axisX == NULL) {
        axisX = new QValueAxis();
        //axisX->setTitleText("Time");
        axisX->setRange(0, 250);
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

    //chart->setAnimationOptions(QChart::AllAnimations);
    chart->setTheme(QChart::ChartThemeDark);
    chart->legend()->setLabelColor(Qt::black);
    chart->setTitleBrush(QColor(255, 255, 255));
    chart->setBackgroundBrush(QColor(45, 45, 45));
    chart->addAxis(axisX, Qt::AlignBottom);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisX);
    series->attachAxis(axisY);
    series_area->attachAxis(axisX);
    series_area->attachAxis(axisY);
    series->setUseOpenGL(true);
    series_area->setUseOpenGL(true);
    series_area->setVisible(false);

    QPen pen(QColor("#d2e4eb"));
    pen.setWidth(2);
    series_area->setPen(pen);

    QBrush brush(QColor(100, 116, 128, 100));
    series_area->setBrush(brush);


    chart->legend()->hide();
    ui->chartView_2->setChart(chart);
    ui->chartView_2->setRenderHint(QPainter::Antialiasing);

}

void Choose_Low::area_on_off() {
    series_area->setVisible(ui->checkBox_2->isChecked());
}

int cmpfunc2(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

void Choose_Low::rest_Y() {
    for (int i = 0; i < 249; i++) {
        Data_Temp[i] = Data[i];
    }
    qsort(Data_Temp, 250, sizeof(int), cmpfunc2);
    timerUpdate();
    axisY->setRange(Data_Temp[1] - 5, Data_Temp[248] + 50);
}

void Choose_Low::doRepaint(double y) {
    y_list.append(y);
    if (y_list.length() > 250) y_list.removeFirst();
    QList<QPointF> points;
    points.clear();
    for (int i = 0;i < y_list.length();i++) {
        points.append(QPointF(i, y_list.at(i)));
    }
    series->replace(points);
    series_area->setUpperSeries(series);
    //series_area->setLowerSeries(0);
}

void Choose_Low::Serial_RX() {
    QByteArray buf = COM2->readAll();
    if (!buf.isEmpty()) {
        QString str = tr(buf);
        ui->textEdit_serialreceive_2->insertPlainText(str);
        ui->textEdit_serialreceive_2->moveCursor(QTextCursor::End);
    }

    QByteArray lineBuf;
    lineBuf += buf;
    int idx;
    while ((idx = lineBuf.indexOf('\n')) >= 0) {
        QByteArray line = lineBuf.left(idx).trimmed();
        lineBuf.remove(0, idx + 1);
        if (line.isEmpty()) continue;
        QList<QByteArray> fields = line.split(',');
        if (fields.size() >= 2) {
            Data_rx = fields[1].toDouble();
            rx_number++;
            ui->label_number_2->setText(QString::number(rx_number));
            Data[Data_tail] = Data_rx;
            Data_tail = (Data_tail + 1) % 250;
            doRepaint(Data_rx);
        }
    }
    Data[Data_tail] = Data_rx;
    Data_tail = (Data_tail + 1) % 250;
    doRepaint(Data_rx);
}

void Choose_Low::pushButton_DataTest() {
    qDebug() << "\nDataTest(){";
    this->hide();
    this->ppage3->show();
    qDebug() << "}";
}

void Choose_Low::openSerial() {
    qDebug() << "\nOpenSerial(){";
    QString baudRate = ui->comboBox_baudrate_2->currentText();
    QString dataBits = ui->comboBox_databits_2->currentText();
    QString stopbits = ui->comboBox_stopbits_2->currentText();
    QString checkBits = ui->comboBox_parity_2->currentText();

    COM2->setPortName(ui->comboBox_serialport_2->currentText());
    qint32 baudRateValue = baudRate.toInt();
    COM2->setBaudRate(baudRateValue);
    QSerialPort::DataBits dataBitsValue = QSerialPort::DataBits(dataBits.toInt());
    COM2->setDataBits(dataBitsValue);
    QSerialPort::StopBits stopBitsValue = QSerialPort::StopBits(stopbits.toInt());
    COM2->setStopBits(stopBitsValue);

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
    COM2->setParity(parityValue);
    if (!opened) {
        if (COM2->open(QIODevice::ReadWrite)) {
            QFont font2;
            font2.setFamilies({ QString::fromUtf8("Share-TechMono") });
            font2.setPointSize(16);
            font2.setBold(false);
            font2.setKerning(true);
            ui->label_serialConnection_2->setFont(font2);
            ui->label_serialConnection_2->setStyleSheet("color:green;");
            ui->label_serialConnection_2->setText("已连接");
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

void Choose_Low::closeSerial() {
    qDebug() << "\nCloseSerial(){";
    if (opened) {
        COM2->close();
        QFont font2;
        font2.setFamilies({ QString::fromUtf8("Share-TechMono") });
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setKerning(true);
        ui->label_serialConnection_2->setFont(font2);
        ui->label_serialConnection_2->setStyleSheet("color:red;");
        ui->label_serialConnection_2->setText("未连接");
        opened = 0;
    }
    else {
        QMessageBox::information(this, "提示", "并未打开串口\n要先打开串口哦", QMessageBox::Yes);
    }
    qDebug() << "}";
}

void Choose_Low::clearSerialReceive() {
    qDebug() << "\nclearSerialReceive(){";
    ui->textEdit_serialreceive_2->clear();
    rx_number = 0;
    ui->label_number_2->setText(QString::number(rx_number));
    qDebug() << "}";
}

void Choose_Low::serialRest() {
    qDebug() << "\nserialRest(){";

    if (opened) {
        COM2->close();
        QFont font2;
        font2.setFamilies({ QString::fromUtf8("Maple Mono NF CN") });
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setKerning(true);
        ui->label_serialConnection_2->setFont(font2);
        ui->label_serialConnection_2->setStyleSheet("color:red;");
        ui->label_serialConnection_2->setText("未连接");
        opened = 0;
    }
    QFont font2;
    font2.setFamilies({ QString::fromUtf8("Maple Mono NF CN") });
    font2.setPointSize(16);
    font2.setBold(false);
    font2.setKerning(true);
    ui->label_serialConnection_2->setFont(font2);
    ui->label_serialConnection_2->setStyleSheet("color:red;");
    ui->label_serialConnection_2->setText("未连接");
    ui->comboBox_serialport_2->clear();
    foreach(const QSerialPortInfo & info, QSerialPortInfo::availablePorts()) {
        ui->comboBox_serialport_2->addItem(info.portName());
        QString portInfo = info.portName() + " " + info.description();
        int index = ui->comboBox_serialport_2->count() - 1;
        ui->comboBox_serialport_2->setItemData(index, portInfo, Qt::ToolTipRole);
    }
    qDebug() << "}";
}