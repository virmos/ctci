#include <stdlib.h>
#include <iostream>
#include "bst.h"

void add_node(struct Node** root, int key, const char* value) 
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode == NULL) 
	{
		std::cout << "Cannot initialize memory for newNode" << "\n";
		return;
	}
	if (root == NULL) 
	{
		std::cout << "Root is empty" << "\n";
		return;
	}

	if (*root == NULL) 
	{
		newNode->key = key;
		newNode->value = value;
		newNode->left = NULL;
		newNode->right = NULL;
		*root = newNode;
	}
	Node* node = *root;
	if (node->key == key)
	{
		node->value = value;
	}
	else if (node->key > key)
	{
		add_node(&(node->left), key, value);
	}
	else if (node->key < key)
	{
		add_node(&(node->right), key, value);
	}
};


void printBST(Node* root) {
	if (!root) return;
	printBST(root->left);
	std::cout << root->value << "\n";
	printBST(root->right);
}
