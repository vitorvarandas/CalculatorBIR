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

int main(){
	//std::stack<Binary_tree> nodestack;
	//std::stack<std::string> opstack;
	//std::string tempstring;


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


}




