#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Creating a binary tree
Node *createTree()
{
    int value;
    cin >> value;
    if (value == 0)
    {
        return nullptr;
    }
    Node *newNode = new Node(value);
    newNode->left = createTree();
    newNode->right = createTree();

    return newNode;
}

// Finding the depth of the created binary tree
int findDepth(Node *root)
{
    if (root == nullptr)
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
    int depth = findDepth(root);
    cout << "Output: " << depth << endl;

    return 0;
}
