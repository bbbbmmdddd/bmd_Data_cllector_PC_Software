#include "Welcom.h"
#include <QDebug>

Welcom::Welcom(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}

Welcom::~Welcom()
{
}

void Welcom::comboBox_change() {
    QString Change_text = ui.comboBox->currentText();
    qDebug() << "ComboBox_Change:" << Change_text;
    if (Change_text == "Modularization_Data_Collector") {
        ui.label_pictures->setStyleSheet("border-image: url(:/Welcom/Modularization_Data_Collector.png);");
    }
    else if (Change_text == "Easy_Data_Collector") {
        ui.label_pictures->setStyleSheet("border-image: url(:/Welcom/Easy_data_cllected_card.png);");
    }
}

void Welcom::pushButton_Enter() {
    qDebug() << "pushButton_Enter";
    QString Change_text = ui.comboBox->currentText();
    qDebug() << "Enter_Model_Number:" << Change_text;
}