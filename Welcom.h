#pragma once

#include <QtWidgets/QWidget>
#include "ui_Welcom.h"
#include "choose.h"
#include "choose_low.h"

class Welcom : public QWidget
{
    Q_OBJECT

public:
    Welcom(QWidget *parent = nullptr);
    ~Welcom();
    Choose* ppage2 = NULL;
	Choose_Low* ppage_low= NULL;
    static bool fast;

private slots:
    void comboBox_change();
    void pushButton_Enter();

private:
    Ui::WelcomClass ui;
};
