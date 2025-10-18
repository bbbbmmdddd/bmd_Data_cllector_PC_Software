#include "choose.h"
#include "dataprocessing.h"
#include "ui_choose.h"

Choose::Choose(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Choose)
{
    ui->setupUi(this);
    this->ppage3 = new DataProcessing;
}

Choose::~Choose()
{
    delete ui;
	delete ppage3;
}

void Choose::pushButton_DataTest()
{
	qDebug() << "DataTest();";
    this->hide();
    this->ppage3->show();
}