#ifndef DATAPROCESSING_H
#define DATAPROCESSING_H

#include <QMainWindow>
#include <QChart>
#include <QLineSeries>
#include <QValueAxis>
#include <QCategoryAxis>

//QT_CHARTS_USE_NAMESPACE

namespace Ui {
class DataProcessing;
}

class DataProcessing : public QMainWindow
{
    Q_OBJECT

public:
    explicit DataProcessing(QWidget *parent = nullptr);
    ~DataProcessing();

private:
    void Chart_init();

private:
    Ui::DataProcessing *ui;
    QChart* my_chart = NULL;
    QValueAxis* my_axisX = NULL;
	QValueAxis* my_axisY = NULL;

    QLineSeries* my_series = NULL;
};

#endif // DATAPROCESSING_H
