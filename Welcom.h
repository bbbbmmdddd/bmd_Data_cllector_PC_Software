#pragma once

#include <QtWidgets/QWidget>
#include "ui_Welcom.h"

class Welcom : public QWidget
{
    Q_OBJECT

public:
    Welcom(QWidget *parent = nullptr);
    ~Welcom();
private slots:
    void comboBox_change();
    void pushButton_Enter();

private:
    Ui::WelcomClass ui;
};
