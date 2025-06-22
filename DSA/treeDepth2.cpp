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

// Function to find a particular node in the binary tree
Node *findNode(Node *root, char target)
{
    if (root == NULL || root->data == target)
    {
        return root;
    }
    Node *leftResult = findNode(root->left, target);
    if (leftResult != NULL)
    {
        return leftResult;
    }
    return findNode(root->right, target);
}

// Function to find the depth of a node in the binary tree
int findDepth(Node *root, Node *target, int depth)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root == target)
    {
        return depth;
    }
    int leftDepth = findDepth(root->left, target, depth + 1);
    if (leftDepth != 0)
    {
        return leftDepth;
    }
    return findDepth(root->right, target, depth + 1);
}

int main()
{
    Node *root = createTree();

    cout << "Binary tree created!" << endl;

    char target;
    cout << "Enter the value of the node to find its depth: ";
    cin >> target;

    Node *targetNode = findNode(root, target);
    if (targetNode != NULL)
    {
        int depth = findDepth(root, targetNode, 0);
        cout << "The depth of the node " << target << " is: " << depth << endl;
    }
    else
    {
        cout << "Node not found!" << endl;
    }

    return 0;
}
