// writing a program to delete a node from a binary tree

#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
};
// function to create a new node

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
    if (root == NULL)
    {
        return create(item);
    }
    else if (root->data > item)
    {
        root->left = insert(root->left, item);
    }
    else if (root->data < item)
    {
        root->right = insert(root->right, item);
    }
    return root;
}

void display(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        // recursive calls using inorder(ascendng)
        display(root->left);       // recursive call for the left subtree
        cout << root->data << " "; // print the value of current node
        display(root->right);      // recursive call for the right subtree        }
    }
}

Node *deleteNode(Node *root, int item)
{
    if (root == NULL)
    {
        return root;
    }
    else if (root->data > item)
    {
        root->left = deleteNode(root->left, item);
        return root;
    }
    else if (root->data < item)
    {
        root->right = deleteNode(root->right, item);
        return root;
    }
    // if one child
    if (root->left == NULL)
    {
        Node *temp = root->right;
        delete root;
        return temp;
    }
    else if (root->right == NULL)
    {
        Node *temp = root->left;
        delete root;
        return temp;
    }
    else
    {
        // the root having two child
        Node *succparent = root;
        Node *succ = root->right;
        while (succ->left != NULL)
        {
            succparent = (succ);
            succ = succ->left;
        }
        if (succparent == root)
        {
            succparent->right = succ->right;
        }
        else
        {
            succparent->right = succ->left;
        }
        root->data = succ->data;
        delete succ;
        return root;
    }
}

int main()
{
    Node *root = NULL;
    /*
    int range;
    cout << "Enter the number of nodes you want: \n";
    cin >> range;
    int arrinsert[range];
    cout << "Enter all the elements of the tree, 1st node is the root:\n ";
    for(int i=0 ; i<range ; i++)
    cin>>arrinsert[i];
    */
    root = insert(root, 14);
    insert(root, 7);
    insert(root, 28);
    insert(root, 10);
    insert(root, 29);
    insert(root, 5);
    insert(root, 15);
    insert(root, 72);
    insert(root, 13);

    cout << "Binary search tree is created successfully!" << endl;
    cout << "In order traversal: ";
    display(root);

    int n;
    cout << "\nEnter the element you want to delete from the BST: " << endl;
    cin >> n;
    root = deleteNode(root, n);
    cout << endl
         << "After deleting " << n << ", In order traversal: ";
    display(root);
    return 0;
}