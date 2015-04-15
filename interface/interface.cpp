#include "interface.h"
#include "ui_calculatorbir.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <QApplication>

int open_interface(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalculatorInterface w;
    w.show();

    return a.exec();
}


CalculatorInterface::CalculatorInterface(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalculatorInterface)
{
    ui->setupUi(this);
}

CalculatorInterface::~CalculatorInterface()
{
    delete ui;
}

void CalculatorInterface::on_Button_0_clicked()
{
    EraseLCDAfterError();
    ui->LCD->setText(ui->LCD->text()+QString::number(0));
}

void CalculatorInterface::on_Button_1_clicked()
{
    EraseLCDAfterError();
    ui->LCD->setText(ui->LCD->text()+QString::number(1));
}

void CalculatorInterface::on_Button_2_clicked()
{
    EraseLCDAfterError();
    ui->LCD->setText(ui->LCD->text()+QString::number(2));
}

void CalculatorInterface::on_Button_3_clicked()
{
    EraseLCDAfterError();
    ui->LCD->setText(ui->LCD->text()+QString::number(3));
}

void CalculatorInterface::on_Button_4_clicked()
{
    EraseLCDAfterError();
    ui->LCD->setText(ui->LCD->text()+QString::number(4));
}

void CalculatorInterface::on_Button_5_clicked()
{
    EraseLCDAfterError();
    ui->LCD->setText(ui->LCD->text()+QString::number(5));
}

void CalculatorInterface::on_Button_6_clicked()
{
    EraseLCDAfterError();
    ui->LCD->setText(ui->LCD->text()+QString::number(6));
}

void CalculatorInterface::on_Button_7_clicked()
{
    EraseLCDAfterError();
    ui->LCD->setText(ui->LCD->text()+QString::number(7));
}

void CalculatorInterface::on_Button_8_clicked()
{
    EraseLCDAfterError();
    ui->LCD->setText(ui->LCD->text()+QString::number(8));
}

void CalculatorInterface::on_Button_9_clicked()
{
    EraseLCDAfterError();
    ui->LCD->setText(ui->LCD->text()+QString::number(9));
}

void CalculatorInterface::on_Button_Dot_clicked()
{
    EraseLCDAfterError();

    int dot = 0, exit =0;

    const char *checkingdot = ui->LCD->text().toStdString().c_str();
    for(signed int i = strlen(checkingdot);i>=0 ;--i){

        if(checkingdot[i]=='+' || checkingdot[i]=='-' || checkingdot[i]=='*' || checkingdot[i]=='/' || checkingdot[i]=='(' || checkingdot[i]==')'|| checkingdot[i]==','|| checkingdot[i]=='.')
        {
            for(unsigned int j = i;j<strlen(checkingdot);++j)
            {
                if(checkingdot[j]==',' || checkingdot[j]== '.')
                {
                    dot =1;
                    break;
                }
                exit =1;
            }

        }
        if(exit==1)
        {
            break;
        }
    }

    if(dot==0){
        ui->LCD->setText(ui->LCD->text()+",");
    }
}

void CalculatorInterface::on_Button_Plus_clicked()
{
    EraseLCDAfterError();
    const char *checkingoperator = ui->LCD->text().toStdString().c_str();
    if(checkingoperator[strlen(checkingoperator)-1]=='+' || checkingoperator[strlen(checkingoperator)-1]=='-' || checkingoperator[strlen(checkingoperator)-1]=='*' || checkingoperator[strlen(checkingoperator)-1]=='/')
    {
        return;
    }else{
        ui->LCD->setText(ui->LCD->text()+"+");
    }
}

void CalculatorInterface::on_Button_Minus_clicked()
{
    EraseLCDAfterError();
    const char *checkingoperator = ui->LCD->text().toStdString().c_str();
    if(checkingoperator[strlen(checkingoperator)-1]=='+' || checkingoperator[strlen(checkingoperator)-1]=='-' || checkingoperator[strlen(checkingoperator)-1]=='*' || checkingoperator[strlen(checkingoperator)-1]=='/')
    {
        return;
    }else{
        ui->LCD->setText(ui->LCD->text()+"-");
    }
}

void CalculatorInterface::on_Button_Times_clicked()
{
    EraseLCDAfterError();
    const char *checkingoperator = ui->LCD->text().toStdString().c_str();
    if(checkingoperator[strlen(checkingoperator)-1]=='+' || checkingoperator[strlen(checkingoperator)-1]=='-' || checkingoperator[strlen(checkingoperator)-1]=='*' || checkingoperator[strlen(checkingoperator)-1]=='/')
    {
        return;
    }else{
        ui->LCD->setText(ui->LCD->text()+"*");
    }
}

void CalculatorInterface::on_Button_Split_clicked()
{
    EraseLCDAfterError();
    const char *checkingoperator = ui->LCD->text().toStdString().c_str();
    if(checkingoperator[strlen(checkingoperator)-1]=='+' || checkingoperator[strlen(checkingoperator)-1]=='-' || checkingoperator[strlen(checkingoperator)-1]=='*' || checkingoperator[strlen(checkingoperator)-1]=='/')
    {
        return;
    }else{
        ui->LCD->setText(ui->LCD->text()+"/");
    }
}

void CalculatorInterface::on_Button_OpenBracket_clicked()
{
    EraseLCDAfterError();
    ui->LCD->setText(ui->LCD->text()+"(");
}

void CalculatorInterface::on_Button_CloseBracket_clicked()
{
    EraseLCDAfterError();
    ui->LCD->setText(ui->LCD->text()+")");
}

void CalculatorInterface::on_Button_AC_clicked()
{
    EraseLCDAfterError();
    ui->LCD->setText("");
}

void CalculatorInterface::on_Button_Backspace_clicked()
{
//    EraseLCDAfterError();
//    const char* auxchar=ui->LCD->text().toStdString().c_str();
//    char backspace[50];
//    strcpy(backspace, auxchar);
//    backspace[strlen(backspace)-1]='\0';
//    ui->LCD->setText(backspace);

    EraseLCDAfterError();
    const std::string auxstring=ui->LCD->text().toStdString();
    std::string backspace;
    backspace=auxstring;
    backspace[backspace.size()-1]='\0';
    ui->LCD->setText(backspace.c_str());
}

void CalculatorInterface::EraseLCDAfterError()
{
    std::string error=ui->LCD->text().toStdString();

    if(error == "SINTAX ERROR" || error == "Division by zero is undefined")
    {
        ui->LCD->setText("");

    }
}

void CalculatorInterface::on_Button_Equal_clicked()
{
    EraseLCDAfterError();

    const char* auxchar=ui->LCD->text().toStdString().c_str();
 //   char solving[CHAR_SIZE];

//    strcpy(solving, auxchar);


   // ui->LCD->setText(MakeCalculation(solving));

}



