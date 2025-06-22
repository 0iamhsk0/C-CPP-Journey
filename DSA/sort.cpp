// WAP to sort the elements in the a single linked list
#include <iostream>
using namespace std;
struct link
{
    int data;
    struct link *next;
};
struct link *start = NULL;
struct link *current;
struct link *node;
int n;
void create()
{
    cout << "How many nodes you want to enter: ";
    cin >> n;
    cout << "Enter all elements ";
    for (int i = 0; i < n; i++)
    {
        node = new link();
        cin >> node->data;
        node->next = NULL;
        if (start == NULL)
        {
            start = node;
        }
        else
        {
            current->next = node;
            current = node;
        }
    }
}
void sorting()
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        link *ptr = start;
        current = ptr->next;
        while (current != NULL)
        {
            if (current->data < ptr->data)
            {
                temp = current->data;
                current->data = ptr->data;
                ptr->data = temp;
            }
            ptr = ptr->next;
            current = current->next;
        }
    }
}
void display()
{
    link *ptr = start;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
int main()
{
    create();
    sorting();
    display();
    return 0;
}