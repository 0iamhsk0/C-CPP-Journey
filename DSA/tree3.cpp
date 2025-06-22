// creating a tree using linked list and recursion and with custom input

#include <iostream>
using namespace std;

// creating a liked list
struct Node
{
    char data;
    Node *left;
    Node *right;
};

Node *create_Tree()
{
    char val;
    cout << "Enter the value of the element that you wanted to insert in the BST( or give 'X' || 'x' for no element):\n";
    cin >> val;

    if (val == 'X' || val == 'x')
    {
        return NULL;
    }
    // we need to create new node everytime an element is inserted
    Node *newnode = new Node;
    newnode->data = val;
    cout << "Enter the left child of " << val << endl;
    newnode->left = create_Tree();
    cout << "Enter the right child of " << val << endl;
    newnode->right = create_Tree();
    return newnode;
}

void display_Tree(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    display_Tree(root->left);
    cout << root->data << " ";
    display_Tree(root->right);
}

int main()
{
    struct Node *root = NULL;
    root = create_Tree();
    cout << "Binary tree created!\n";
    cout << "The inorder traversal for the BST is:\n";
    display_Tree(root);
    return 0;
}