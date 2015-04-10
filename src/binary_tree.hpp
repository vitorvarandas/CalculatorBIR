/*
 * binary_tree.hpp

 *
 *  Created on: 08/04/2015
 *      Author: vitorvarandas
 */

#ifndef BINARY_TREE_HPP_
#define BINARY_TREE_HPP_


#include <iostream>
#include <string>
#include <math.h>
#include <sstream>
#include <stdlib.h>

class Node_type
{
public:
	std::string data;
	Node_type *left_child;
	Node_type *right_child;
	Node_type(std::string k)
	{
		data=k;
		left_child = NULL;
		right_child = NULL;
	}
};
Node_type *build_node(std::string x) //build a new node for the tree
{
	Node_type *new_node;
	new_node = new Node_type(x);
	return(new_node);
}

class Binary_tree
{
public:
	Node_type *root;
	void print(Node_type *r); // Postfix traversal
	Binary_tree(void) { root = NULL;}
//	void print(void) {print (root);


	//}

	struct Node_type* insert(Node_type *node, std::string data){

		if(node==NULL) {
		//	std::cout<<"aaaa1"<<std::endl;
			return (build_node(data));
		}
		 else
		    {
			 	 if(node->right_child==NULL){
			 		 node->right_child=insert(node->right_child,data);
			 		// std::cout<<"aaaa2"<<node->right_child->data<<std::endl;}
			 	 else{
			 		 node->left_child=insert(node->left_child,data);
			 		// std::cout<<"aaaa3"<<node->left_child->data<<std::endl;


			 	 }


		    }

	}

	void clear_help(Node_type* rt) // destructor
	{
		if( rt != NULL )
		{
			clear_help( rt->left_child);
			clear_help( rt->right_child);
			delete rt;
        }

    }
	void clear()
	{
		clear_help(root);
	}

};


void  Binary_tree::print (Node_type *p) //postfix traversal
{
	if(p != NULL)
	{
		print(p->left_child);
		print(p->right_child);
		std::cout << p->data << " ";
	}
}



#endif /* BINARY_TREE_HPP_ */
