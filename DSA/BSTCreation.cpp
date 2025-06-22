/********************************************************************************/
#include <iostream>
using namespace std;
struct Node
{
    int key;
    Node* left;
    Node* right;
};
Node* create(int number)
{
    Node* newnode=new Node;
    newnode->key=number;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
Node* insert(Node* node, int no)
{
	if (node == NULL)
		return create(no);
	if (no < node->key)
		node->left = insert(node->left, no);
	else if (no > node->key)
		node->right = insert(node->right, no);
	return node;
}
int main()
{
    Node* root=NULL;
    root=insert(root,15);
    insert(root,6);
    insert(root,7);
    insert(root,20);
    insert (root,3);
    insert(root,20);
    cout<<"BST creatated Succcessfully";
    return 0;
}