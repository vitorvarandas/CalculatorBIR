/*
 * evaluate.cpp
 *
 *  Created on: Apr 13, 2015
 *      Author: gustavo
 */
#include "evaluate.hpp"
#include <string>
#include <iostream>
using namespace std;

bool IsOp(string mystring)
{
    if(mystring == "-" || mystring == "+" || mystring == "/" || mystring == "*" || mystring == "^")
        return(true);
    else
        return(false);
}

void evaluate::evaluate(node_type* prt)
{

    if(IsOp(prt->data) && !IsOp(prt->right_child->data) && !IsOp(prt->left_child->data))
    {
        double num;
        double num2 = atof(prt->right_child.c_str()->data.c_str());
        double num1 = atof(prt->left_child.c_str()->data.c_str());
        if(prt->data == "+")
        {
            num = num1 + num2;
        }
        else if (prt->data == "-")
        {
            num = num1 - num2;
        }
        else if(prt->data == "/")
        {
            num = num1 / num2;
        }
        else if (prt->data == "*")
        {
            num = num1 * num2;
        }

        stringstream ss;
        string result;
        ss << num;
        ss >> result;
        prt->data = result;
        prt->left_child = NULL;
        prt->right_child = NULL;

       // cout<<"Resultado = "<< result <<endl;

    }
    else if(prt->left_child == NULL && prt->right_child == NULL);
    else
    {
        evaluate(prt->left_child);
        evaluate(prt->right_child);
        evaluate(prt);
    }

