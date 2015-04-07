#ifndef CALCULATORBIR_H
#define CALCULATORBIR_H

#include <QMainWindow>

namespace Ui {
class CalculatorBIR;
}

class CalculatorBIR : public QMainWindow
{
    Q_OBJECT

public:
    explicit CalculatorBIR(QWidget *parent = 0);
    ~CalculatorBIR();

private:
    Ui::CalculatorBIR *ui;
};

#endif // CALCULATORBIR_H
