#include "iban.h"
#include "./ui_iban.h"

IBAN::IBAN(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::IBAN)
{
    ui->setupUi(this);
}

IBAN::~IBAN()
{
    delete ui;
}


void IBAN::on_pushButton_clicked()
{
    QString temp=ui->lineEdit->text();
    QRegularExpressionMatch obj = regular.match(temp);
    if (obj.hasMatch())
    {
        ui->label->setText(temp + " - " + "Може існувати");

    }
    else
    {
        ui->label->setText(temp + " - " + "Не може існувати");

    };
    ui->lineEdit->clear();
    ui->lineEdit->setFocus();
}


void IBAN::on_lineEdit_returnPressed()
{
    QString temp=ui->lineEdit->text();
    QRegularExpressionMatch obj = regular.match(temp);
    if (obj.hasMatch())
    {
        ui->label->setText(temp + " - " + "Може існувати");

    }
    else
    {
        ui->label->setText(temp + " - " + "Не може існувати");

    };
    ui->lineEdit->clear();
    ui->lineEdit->setFocus();
}

