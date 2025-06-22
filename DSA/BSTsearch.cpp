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
void display(Node* root)
{
    if(root==NULL)
    return;
    cout<<root->key<<" ";
    display(root->left);
    display(root->right);
    
}
Node* search(Node* root, int no)
{
	if (root == NULL || root->key == no)
		return root;

	if (root->key < no)
		return search(root->right, no);

	return search(root->left, no);
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
    cout<<"BST creatated Succcessfully"<<endl;
    cout<<"Inorder Traversal: ";
    display(root);
    int n=16;
    if(search(root,n)==NULL)
    {
        cout<<" Number not found";
    }
    else
    { 
        cout<<" Number Found";
    }
    return 0;
}