/*
 * main.cpp
 *
 *  Created on: 08/04/2015
 *      Author: vitorvarandas
 */

#include <iostream>
#include <string>
#include <math.h>
#include <sstream>
#include <stdlib.h>
#include "binary_tree.hpp"
#include "evaluate.hpp"
#include "Sintax.hpp"
#include "Sintax.cpp"

int main(){
	//std::stack<Binary_tree> nodestack;
	//std::stack<std::string> opstack;
	//std::string tempstring;

    evaluate obj;

	//tempstring = 345**;
	Binary_tree etree;
	Node_type *root=NULL;
	root = etree.insert(root,"+");
	root = etree.insert(root,"*");
	root = etree.insert(root,"4");
	root = etree.insert(root,"3");
	root = etree.insert(root,"2");
	std::cout << "Postfix traversal: ";
	etree.print(root);
    obj.evaluatetree(root);

// This is the way that we call the sintax, it will return us 1 for true, and the kind of error when it is not true 0

    Sintax expression;
    bool example = expression.general_sintax_error("3+5*7");
    cout << "" << example << endl;
}




