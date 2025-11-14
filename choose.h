#ifndef CHOOSE_H
#define CHOOSE_H

#include <QWidget>
#include "dataprocessing.h"

namespace Ui {
class Choose;
}

class Choose : public QWidget
{
    Q_OBJECT

public:
    explicit Choose(QWidget *parent = nullptr);
    ~Choose();
    DataProcessing* ppage3 = NULL;

private slots:
    void pushButton_DataTest();
    void Chart_init();

    void serialSend();
    void openSerial();
    void closeSerial();
    void clearSerialReceive();
    void pushSetup();
    void labelRest();
    void serialRest();

private:
    Ui::Choose *ui;

    QChart* chart = NULL;
    QValueAxis* axisX = NULL;
    QValueAxis* axisY = NULL;

    QLineSeries* series = NULL;
};

#endif // CHOOSE_H
