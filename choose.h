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

private:
    Ui::Choose *ui;
};

#endif // CHOOSE_H
