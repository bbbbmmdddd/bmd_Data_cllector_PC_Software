#include "xlsxdocument.h"
#include "xlsxchartsheet.h"
#include "xlsxcellrange.h"
#include "xlsxchart.h"
#include "xlsxrichstring.h"
#include "xlsxworkbook.h"

#include "dataprocessing.h"
#include "ui_dataprocessing.h"

#include <QUrl>
#include <QDesktopServices>

double ADC_sps;

double myArray[] = {1,2,3,4,5,6,7,9,8,7,6,5,4,3,2,1};

DataProcessing::DataProcessing(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DataProcessing)
{
    ui->setupUi(this);
    Chart_init();
    for (int i = 0;i < sizeof(myArray) / sizeof(double);i++) {
		my_series->append(i,myArray[i]);
        //QThread::msleep(1);
        //my_series->append(i，qrand() % 220);
    }
}

DataProcessing::~DataProcessing()
{
    delete ui;
}

void DataProcessing::Chart_init() {
    if (my_chart == NULL) {
        my_chart = new QChart();
    }
    if (my_series == NULL) {
        my_series = new QLineSeries();
        my_series->setName("N");
        my_chart->addSeries(my_series);
    }
    if (my_axisX == NULL) {
        my_axisX = new QValueAxis();
        my_axisX->setTitleText("Time");
        my_axisX->setRange(0,sizeof(myArray) / sizeof(double));
        my_axisX->setGridLineVisible(true);
        my_axisX->setTickCount(6);
        my_axisX->setMinorTickCount(5);
    }
    if (my_axisY == NULL) {
        my_axisY = new QValueAxis();
        my_axisY->setTitleText("N");
        my_axisY->setRange(0, 170);
        my_axisY->setGridLineVisible(true);
        my_axisY->setTickCount(22);
        my_axisY->setMinorTickCount(5);
    }

    //my_chart->setBackgroundBrush(QColor(0, 0, 0));
    my_chart->addAxis(my_axisX, Qt::AlignBottom);
    my_chart->addAxis(my_axisY, Qt::AlignLeft);
    my_series->attachAxis(my_axisX);
    my_series->attachAxis(my_axisY);
    my_chart->legend()->hide();
    ui->chartView->setChart(my_chart);
	ui->chartView->setRenderHint(QPainter::Antialiasing);

}

void DataProcessing::calculation() {
	qDebug() << "\ncalculation(){";
    QFont font2;
    font2.setFamilies({ QString::fromUtf8("Share-TechMono") });
    font2.setPointSize(27);
    //font2.setBold(false);
    //font2.setKerning(true);
    ui->label_TotalImpulse->setFont(font2);
    //ui.label_serialConnection->setStyleSheet("color:red;");

    QString ADC_MHz_kHz_Hz = ui->comboBox_MHz_kHz_Hz->currentText();
	QString m_Kg_g = ui->comboBox_kg_g->currentText();
	ADC_sps = ui->lineEdit_sps->text().toDouble();
	double m = ui->lineEdit_m->text().toDouble();

    if (ADC_MHz_kHz_Hz == "MHz") ADC_sps = ADC_sps * 1000000;
    else if (ADC_MHz_kHz_Hz == "kHz") ADC_sps = ADC_sps * 1000;
    else ADC_sps = ADC_sps;
    if (m_Kg_g == "kg") m = m;
    else m = m / 1000;

    qDebug() << "   ADC_sps:" << ADC_sps << "Hz;";
	qDebug() << "   m:" << m << "kg;";

	//总冲量
    const double dt = 1.0 / ADC_sps;
    double totalImpulse = 0.0;
    for (int i = 1; i < sizeof(myArray) / sizeof(double); i++) {
        double avgThrust = (myArray[i] + myArray[i - 1]) * 0.5;
        totalImpulse += avgThrust * dt;
    }
    ui->label_TotalImpulse->setText(QString::number(totalImpulse, 'f', 4));

	//平均比冲
    const double g0 = 9.80665;
    double AverageSpecificImpulse;
    AverageSpecificImpulse = totalImpulse / (m * g0);
    ui->label_AverageSpecificImpulse->setText(QString::number(AverageSpecificImpulse, 'f', 4));

    //平均推力
    double AverageN = 0;
    for (int i = 0; i < sizeof(myArray) / sizeof(double); i++) {
		AverageN += myArray[i];
    }
	AverageN = AverageN / (sizeof(myArray) / sizeof(double));
    ui->label_AverageN->setText(QString::number(AverageN, 'f', 4));

    //最大推力
    double MaxN = 0;
	for (int i = 0; i < sizeof(myArray) / sizeof(double); i++) {
		if (myArray[i] > MaxN) {
			MaxN = myArray[i];
		}
	}
	ui->label_MaxN->setText(QString::number(MaxN, 'f', 4));

    //最大比冲
    double MaxSpecificImpulse = ui->lineEdit_mr->text().toDouble();
    MaxSpecificImpulse = MaxN / MaxSpecificImpulse;
    ui->label_MaxSpecificImpulse->setText(QString::number(MaxSpecificImpulse, 'f', 4));

    qDebug() << "}";
}

void DataProcessing::back() {
    qDebug() << "\nback(){";
    this->hide();
    emit this->back_choose();
    qDebug() << "}";
}

void DataProcessing::calculation_mr() {
    qDebug() << "\ncalculation_mr(){";
    QDesktopServices::openUrl(QUrl("index.html"));
	qDebug() << "}";
}

void DataProcessing::outFile() {
    qDebug() << "\noutFile(){";
    QXlsx::Document xlsx("Template.xlsx");
    xlsx.selectSheet("Data");
    xlsx.write(1, 1,50);
    xlsx.write(1, 2,50);
    //xlsx.write(2, 2, QString::fromLocal8Bit("114514"));
    //xlsx.saveAs("Template.xlsx");

    if (!xlsx.selectSheet("Chart")) {
        xlsx.addSheet("Chart");
    }

    QXlsx::Chart * pieChart = xlsx.insertChart(0, 0, QSize(2450, 1134));
    pieChart->setChartType(QXlsx::Chart::CT_LineChart);
    pieChart->addSeries(QXlsx::CellRange("B1:B1000"));

    xlsx.saveAs("book1.xlsx");
    qDebug() << "}";
}