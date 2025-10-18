#include "dataprocessing.h"
QT_BEGIN_NAMESPACE
#include "ui_dataprocessing.h"

DataProcessing::DataProcessing(QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::DataProcessing)
{
    ui->setupUi(this);
    Chart_init();
}

DataProcessing::~DataProcessing()
{
    delete ui;
}

void DataProcessing::Chart_init()
{
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
        my_axisX->setRange(0, 60);
        my_axisX->setGridLineVisible(true);
        my_axisX->setTickCount(6);
        my_axisX->setMinorTickCount(5);
    }
    if (my_axisY == NULL) {
        my_axisY = new QValueAxis();
        my_axisY->setTitleText("N");
        my_axisY->setRange(0, 220);
        my_axisY->setGridLineVisible(true);
        my_axisY->setTickCount(22);
        my_axisY->setMinorTickCount(5);
    }
    my_chart->addAxis(my_axisX, Qt::AlignBottom);
    my_chart->addAxis(my_axisY, Qt::AlignLeft);
    my_series->attachAxis(my_axisX);
    my_series->attachAxis(my_axisY);
    my_chart->legend()->hide();
    ui->graphicsView->setChart(my_chart);
}