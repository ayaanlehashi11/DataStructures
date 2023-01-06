#include <iostream>

#ifndef TREES_hPP
#define TREES_HPP
#endif
struct AVLNode {
	struct AVLNode* left;
	struct AVLNode* right;
	int data;
	int height;
};
struct BSTNode {
	BSTNode* left;
	BSTNode* right;
	int data;
};
class BinarySearchTree {
public:
	BinarySearchTree();
	BSTNode* insert(BSTNode*, int);
	BSTNode* del(BSTNode*, int);
	BSTNode* balance(BSTNode*, int);
	void display(BSTNode*, int);
	void preorder(BSTNode*);
	void postorder(BSTNode*);
	void inorder(BSTNode*);
};
class AVLTree {
public:
	AVLTree();
	int heigth(AVLNode * n);
	AVLNode* rightleft_rotation(AVLNode*);
	AVLNode* leftleft_rotation(AVLNode*);
	AVLNode* leftright_rotation(AVLNode*);
	AVLNode* rightright_rotation(BSTNode*);
	AVLNode* balance(AVLNode* t);
	AVLNode* insert(AVLNode* r, AVLNode v);
	void display(AVLNode*);
	void preorder(AVLNode*);
	void inorder(AVLNode*);
	void postorder(AVLNode*);
};

