#include "calculatorbir.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalculatorBIR w;
    w.show();

    return a.exec();
}
