#include "iban.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    IBAN w;
    w.show();
    return a.exec();
}
