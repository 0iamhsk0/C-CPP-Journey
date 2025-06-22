
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
Node* create(int item)
{
    Node* newnode=new Node;
    newnode->data=item;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
Node* insert(Node* root,int item)
{
    if(root==NULL)
        return create(item);
    if(item<root->data)
    {
        root->left=insert(root->left,item);
    }
    else if(item>root->data)
    {
        root->right=insert(root->right,item);
    }
    return root;
}
void display(Node* root)
{
    if(root==NULL)
        return;
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}
Node* deleteNode(Node* root,int item)
{
    if(root==NULL)
        return root;
    if(item < root->data)
    {
        root->left=deleteNode(root->left,item);
        return root;
    }
    else if(item > root->data)
    {
        root->right=deleteNode(root->right,item);
        return root;
    }
    
    //delete one child
    if(root->left==NULL)
    {
        Node* temp=root->right;
        delete root;
        return temp;
    }
    else if(root->right==NULL)
    {
        Node* temp=root->left;
        delete root;
        return temp;
    }
    else
    {
        //two child (find the inorder predecessor of the number u want to delete)
        Node* succParent=root;
        Node* succ=root->right;
        while(succ->left!=NULL)
        {
            succParent=succ;
            succ=succ->left;
        }
        if (succParent != root)
			succParent->left = succ->right;
		else
			succParent->right = succ->right;

		// Copy Successor Data to root
		root->data = succ->data;

		// Delete Successor and return root
		delete succ;
		return root;
    }
    
}
int main()
{
    Node* root=NULL;
    root=insert(root,14);
    insert(root,7);
    insert(root,27);
    insert(root,13);
    insert(root,25);
    insert(root,10);
    insert(root,20);
    insert(root,3);
    insert(root,5);
    insert(root,28);
    cout<<"BST Created Successfully !"<<endl;
    cout<<"inorder traversal is: ";
    display(root);
    int n;
    cout<<"\nEnter the Number you want to delete:";
    cin>>n;
    root=deleteNode(root,n);
    cout<<"inorder traversal after delete: ";
    display(root);
    return 0;
}