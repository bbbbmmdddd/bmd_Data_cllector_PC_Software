#include "Welcom.h"
#include <QDebug>
#include "choose.h"
#include "choose_low.h"

Welcom::Welcom(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
	this->ppage2 = new Choose;
	this->ppage_low = new Choose_Low;
}

Welcom::~Welcom()
{
	delete ppage2;
	delete ppage_low;
}

void Welcom::comboBox_change() {
    qDebug() << "\ncomboBox_change(){";
    QString Change_text = ui.comboBox->currentText();
    qDebug() << "   ComboBox_Change:" << Change_text << ";";
    if (Change_text == "Modularization_Data_Collector") {
        ui.label_pictures->setStyleSheet("border-image: url(:/Welcom/Modularization_Data_Collector.png);");
    }
    else if (Change_text == "320Hz_Card") {
        ui.label_pictures->setStyleSheet("border-image: url(:/Welcom/320hz_card.jpg);");
    }
    else if (Change_text == "Easy_Data_Collector") {
        ui.label_pictures->setStyleSheet("border-image: url(:/Welcom/Easy_data_cllected_card.png);");
    }
    qDebug() << "}";
}

void Welcom::pushButton_Enter() {
    qDebug() << "\npushButton_Enter(){";
    QString Change_text = ui.comboBox->currentText();
    qDebug() << "   Enter_Model_Number:" << Change_text << ";";
    if (Change_text == "320Hz_Card") {
        this->hide();
        this->ppage_low->show();
    }
    else {
		this->hide();
		this->ppage2->show();
    }

    qDebug() << "}";
}