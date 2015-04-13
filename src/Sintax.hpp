#ifndef SINTAX_H
#define SINTAX_H

class Sintax
{
public:
    bool operator_error(char expression[]);
    bool sintax_error(char expression[]);
    bool bracket_error(char expression[]);
    bool dots_error(char expression[]);
    bool general_sintax_error(char expression[]);
};

#endif // SINTAX_H
