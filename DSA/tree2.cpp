// WAP to create a binary tree using recursion and display the Inorder traversal
// in this second method we ask the user repeatedly to take the input

#include <iostream>
using namespace std;
struct Node
{
    char data;
    Node *left;
    Node *right;
};

Node *create()
{
    char val;
    cout << "Enter the element(or give 'X' for no element)" << endl;
    cin >> val;

    if (val == 'X')
    {
        return NULL;
    } // the stopping condition(base case)

    Node *newnode = new Node;
    newnode->data = val;
    cout << "Enter the left child of " << val << ": ";
    newnode->left = create(); // r1
    cout << "Enter the right child of " << val << ": ";
    newnode->right = create(); // r2
    return newnode;
}

void display(Node *root)
{
    // base case:
    if (root == NULL)
    {
        return;
    }
    // recursive cases:
    display(root->left);
    cout << root->data << " ";
    display(root->right);
}

int main()
{
    Node *root = NULL;
    root = create();
    cout << "Binary tree created succesfully!" << endl;
    cout << "Inorder traversal is: " << endl;
    display(root);

    return 0;
}