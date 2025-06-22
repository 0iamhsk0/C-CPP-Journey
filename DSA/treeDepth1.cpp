#include <iostream>
using namespace std;

// Creating a linked list for the binary tree
struct Node
{
    char data;
    Node *left;
    Node *right;
};

// Function to create a binary tree
Node *createTree()
{
    char val;
    cout << "Enter the value of the node (or 'X' for no node): ";
    cin >> val;

    if (val == 'X' || val == 'x')
    {
        return NULL;
    }

    Node *newNode = new Node;
    newNode->data = val;

    cout << "Enter the left child of " << val << ":" << endl;
    newNode->left = createTree();

    cout << "Enter the right child of " << val << ":" << endl;
    newNode->right = createTree();

    return newNode;
}

// Function to find the depth of the binary tree
int findDepth(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftDepth = findDepth(root->left);
    int rightDepth = findDepth(root->right);
    return max(leftDepth, rightDepth) + 1;
}

int main()
{
    Node *root = createTree();

    cout << "Binary tree created!" << endl;
    int depth = findDepth(root);
    cout << "The depth of the binary tree is: " << depth << endl;

    return 0;
}
