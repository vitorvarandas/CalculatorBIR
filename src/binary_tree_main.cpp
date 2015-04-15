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
#include "binary_tree.cpp"
#include "evaluate.hpp"

int main(){
	//std::stack<Binary_tree> nodestack;
	//std::stack<std::string> opstack;
	//std::string tempstring;


	//tempstring = 345**;
	evaluate eval;
	Binarytree etree;
	Nodetype *root=NULL;
//	checkInsert = false;
//	root = etree.insert(root,"+");
//	checkInsert = false;
//	root = etree.insert(root,"/");
//	checkInsert = false;
//	root = etree.insert(root,"1");
//	checkInsert = false;
//	root = etree.insert(root,"2");
//	checkInsert = false;
//	root = etree.insert(root,"-");
//	checkInsert = false;
//	root = etree.insert(root,"3");
//	checkInsert = false;
	root = etree.insert(root,"-");
	checkInsert = false;
	root = etree.insert(root,"18");
	checkInsert = false;
	root = etree.insert(root,"-");
	checkInsert = false;
	root = etree.insert(root,"12");
	checkInsert = false;
	root = etree.insert(root,"4");
	std::cout << "Postfix traversal: "<<std::endl;
	etree.print(root);
	eval.evaluatetree(root);
	std::cout << " \n Result: " << root->data << std::endl;
}




