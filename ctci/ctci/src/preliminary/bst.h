#pragma once

#ifndef _BST_H_
#define _BST_H_
struct Node 
{
	int key;
	const char* value;
	struct Node* left;
	struct Node* right;
};
void add_node(struct Node** root, int key, const char* value);
void printBST(Node* root);
#endif // #ifndef _BST_H_