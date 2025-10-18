#ifndef DATAPROCESSING_H
#define DATAPROCESSING_H

#include <QMainWindow>
#include <QChart>
#include <QLineSeries>
#include <QValueAxis>
#include <QCategoryAxis>

#include "xlsxdocument.h"
#include "xlsxchartsheet.h"
#include "xlsxcellrange.h"
#include "xlsxchart.h"
#include "xlsxrichstring.h"
#include "xlsxworkbook.h"

namespace Ui {
class DataProcessing;
}

class DataProcessing : public QWidget
{
    Q_OBJECT

public:
    explicit DataProcessing(QWidget *parent = nullptr);
    ~DataProcessing();

private slots:
    void Chart_init();
    void outFile();

private:
    Ui::DataProcessing *ui;

    QChart* my_chart = NULL;
    QValueAxis* my_axisX = NULL;
    QValueAxis* my_axisY = NULL;

    QLineSeries* my_series = NULL;
};

#endif // DATAPROCESSING_H
