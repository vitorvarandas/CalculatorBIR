#include "calculatorbir.h"
#include "ui_calculatorbir.h"

CalculatorBIR::CalculatorBIR(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalculatorBIR)
{
    ui->setupUi(this);
}

CalculatorBIR::~CalculatorBIR()
{
    delete ui;
}
