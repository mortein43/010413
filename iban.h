#ifndef IBAN_H
#define IBAN_H

#include <QMainWindow>
#include <QRegularExpression>
#include <QRegularExpressionValidator>

QT_BEGIN_NAMESPACE
namespace Ui { class IBAN; }
QT_END_NAMESPACE

class IBAN : public QMainWindow
{
    Q_OBJECT

public:
    IBAN(QWidget *parent = nullptr);
    ~IBAN();

private slots:
    void on_pushButton_clicked();

    void on_lineEdit_returnPressed();

private:
    Ui::IBAN *ui;
    QString r= "^(UA)[0-9]{2}[0-9]{6}([0-9]{19})$";
    QRegularExpression regular = QRegularExpression(r);

};
#endif // IBAN_H
