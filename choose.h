#ifndef CHOOSE_H
#define CHOOSE_H

#include <QWidget>
#include "dataprocessing.h"
#include <QTimer>

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
    void Serial_RX();
    void timerUpdate();
    void rest_Y();
    void dataOpen();
    void dataClose();
    void area_on_off();

private:
    Ui::Choose *ui;

    QChart* chart = NULL;
    QValueAxis* axisX = NULL;
    QValueAxis* axisY = NULL;

    QLineSeries* series = NULL;
	QAreaSeries* series_area = NULL;

    QTimer* restTimer = NULL;

    int Data[250] = { 0 };
    int Data_Temp[250] = { 0 };
	int Data_head = 0;
	int Data_tail = 0;
    int Data_rx = 0;
    long long rx_number = 0;
    bool opened = 0;

    int x_index = 0;
    QList<int> y_list;

	

    void doRepaint(double y);
};

#endif // CHOOSE_H
