#include <iostream>
using namespace std;

struct link
{
    char data;
    struct link *left_child;
    struct link *right_child;
};

struct link *insert(char val)
{
    struct link *new_node = new struct link;
    new_node->data = val;
    new_node->left_child = NULL;
    new_node->right_child = NULL;
    return new_node;
}

void display_preorder(struct link *root)
{
    if (root == NULL)
        return;
    // Print the data with space (preorder)
    cout << root->data << " ";
    display_preorder(root->left_child);
    display_preorder(root->right_child);
}

void display_postorder(struct link *root)
{
    if (root == NULL)
        return;
    // Print the data with space (postorder)
    display_postorder(root->left_child);
    display_postorder(root->right_child);
    cout << root->data << " ";
}

void display_inorder(struct link *root)
{
    if (root == NULL)
        return;
    // Print the data with space (inorder)
    display_inorder(root->left_child);
    cout << root->data << " ";
    display_inorder(root->right_child);
}

int main()
{
    struct link *root = insert('A');
    root->left_child = insert('B');
    root->left_child->left_child = insert('D');
    root->right_child = insert('C');
    root->right_child->left_child = insert('E');
    root->right_child->left_child->left_child = insert('G');
    root->right_child->right_child = insert('F');

    cout << "Binary tree inserted successfully!" << endl;
    cout << "Preorder traversal is: " << endl;
    display_preorder(root);
    cout << endl
         << "Postorder traversal is: " << endl;
    display_postorder(root);
    cout << endl
         << "Inorder traversal is: " << endl;
    display_inorder(root);

    return 0;
}
