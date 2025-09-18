#pragma once

#include <QtWidgets/QWidget>
#include "ui_Welcom.h"

class Welcom : public QWidget
{
    Q_OBJECT

public:
    Welcom(QWidget *parent = nullptr);
    ~Welcom();

private:
    Ui::WelcomClass ui;
};
