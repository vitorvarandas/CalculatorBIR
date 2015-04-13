#ifndef EVALUATE_INCLUDED
#define EVALUATE_INCLUDED
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class evaluate
{

public:

    void evaluatetree(node_type* prt)
    {

        if(IsOp(prt->data) && !IsOp(prt->right_child->data) && !IsOp(prt->left_child->data)){
        double num;
        double num1 = atof(ptr->right_child.c_str()->data.c_str());
        double num2 = atof(ptr->left_child.c_str()->data.c_str());
        if(op == '+')
        {
            num = num1 + num2;
        }
        else if (op == '-')
        {
            num = num1 - num2;
        }
        else if(op == '/')
        {
            num = num1 / num2;
        }
        else if (op == '*')
        {
            num = num1 * num2;
        }

        stringstream ss;
        string result;
        ss << num;
        ss >> result;

        cout<<"Resultado = "<< result <<endl;

    }
};







#endif // EVALUATE_INCLUDED
