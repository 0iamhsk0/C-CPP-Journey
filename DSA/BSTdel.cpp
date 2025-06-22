// creating a binary search tree and then deleting the required number:

#include <iostream>
using namespace std;
// A BST node
struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *create()
{
    char val;
    cout << "Enter the element or give 'X' or 'x' for no element";
    cin >> val;
    if (val == 'X' || 'x')
    {
        return;
    }
    else
    {
        Node *newnode = new Node;
        newnode->data = val;
    }

    int main()
    {
        Node *root = NULL;
        root = create();
        return 0;
    }
