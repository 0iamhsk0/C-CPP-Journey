#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *top = NULL; // Declaring top as a global variable

Node *push(int n)
{
    Node *newnode = new Node;
    if (newnode == top)
    {
        cout << "Error: Stack overflow!";
        return NULL;
    }
    newnode->data = n;
    newnode->next = top;
    top = newnode;
    cout << "Element " << n << " pushed into the stack!" << endl;
    return newnode;
}

void pop()
{
    if (top == NULL)
    {
        cout << "Stack underflow" << endl;
        return;
    }
    Node *temp = top;
    top = temp->next;
    cout << "Popped element: " << temp->data << endl;
    delete temp;
}

void peek()
{
    if (top == NULL)
    {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Topmost element of the stack is: " << top->data << endl;
}

void display()
{
    if (top == NULL)
    {
        cout << "Stack is empty" << endl;
        return;
    }
    Node *temp = top;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int choice, n;

    do
    {
        cout << "Enter your choice: 1.Push 2.Pop 3.Peek 4.Display 5.Exit" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the element you want to push onto the stack: " << endl;
            cin >> n;
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            cout << "Exiting!" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (choice != 5);

    return 0;
}
