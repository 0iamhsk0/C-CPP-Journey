// creating a binary search tree

#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
};

Node *create(int item)
{
    Node *node = new Node;
    node->data = item;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node *insert(Node *root, int item)
{
    if (root == NULL) // base case
        return create(item);

    else if ((root->data > item))
        root->left = insert((root->left), item);

    else if ((root->data < item))
        root->right = insert((root->right), item);
    return root;
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

Node *search(Node *root, int item)
{
    // 2 base cases - one, if root == null and when element found
    if (root == NULL || root->data == item)
        return root;
    if (item < root->data)
        return search(root->left, item);
    else if (item > root->data)
        return search(root->right, item);
    else
        return root;
}

int main()
{
    Node *root = NULL;
    root = insert(root, 9);
    insert(root, 6);
    insert(root, 4);
    insert(root, 14);
    insert(root, 12);
    insert(root, 5);
    insert(root, 10);

    cout << "The binary search tree is created! " << endl;
    cout << "Inorder traversal is: ";
    display(root);

    // searching an element from the created inorder list
    int n;
    cout << "Enter the element that you want to search: " << endl;
    cin >> n;
    if (search(root, n) == NULL)
        cout << "Number not found!" << endl;
    else
        cout << "Element found!" << endl;

    return 0;
}
