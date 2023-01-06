#include <iostream>
#include <list>
#include <map>

AVLTree::AVLTree() {

}
int AVLTree::heigth(AVLNode * n)
{
	int h = 0;
	if (n != NULL)
	{
		int left_heigth = heigth(t->l);
		int right_heigth = heigth(t->r);
		int max_heigth = max(left_heigth, rigth_heigth);
		h = max_heigth + 1;
	}
}

AVLNode* AVLTree::rightleft_rotation(AVLNode* parent)
{

}
AVLNode* leftleft_rotation(BSTNode* parent) {
	AVLNode* t;
	t = parent->r;
	parent->r = t->l;
	t->l = parent;
	return t;
}
AVLNode* leftright_rotation(BSTNode*parent)
{
	AVLNode* t;
	t = parent->r;
	parent->r = leftright_rotation();
	return leftleft_rotation(parent);
}
AVLNode* rightright_rotation(BSTNode* rr_rotation)
{
	AVLNode* t;
	t = parent ->;
	parent->r = t->l;
	t->l = parent;
	return t;
}
AVLNode* AVLTree::insert(AVLNode* r, AVLNode* v)
{
	if (r == NULL)
	{
		r = new AVLNode;
		r->d = v;
		r->l = NULL;
		r->r = NULL;
	}
	else if (v < r->d)
	{
		r->l = insert(r->l, v);
		r = balance(r);
	}
	else if (v >= r->d)
	{
		r->r = insert(r->r, v);
		r = balance(r);
	}
	return r;
}
void display(AVLNode* node) {
	int i;
	if (p != NULL)
	{
		display(p->r, l + 1);
		cout << " ";
		if (p == r)
			std::cout << "Root" << ;
		for (i = 0; i < l && p != r;i++)
		{
			std::cout << " ";
			std::cout << p->d;
			display(p->l, l + 1);
		}
	}
}
void preorder(AVLNode* node) {

}
void inorder(AVLNode* node)
{

}
void postorder(AVLNode* node) {

}
