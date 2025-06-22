// Queue using string

#include <iostream>
using namespace std;
int q[100], f = -1, r = -1;

void enque()
{
    int val;
    if (r == -1)
    {
        cout << "Queue overflow!\n";
    }
    else
    {
        if (f == -1)
        {
            f = 0;
        }
        else
        {
            cout << "Enter the element you want to insert: \n";
            cin >> val;
            q[r++] = val;
        }
    }
}

void deque()
{
    if (f == -1 || f > r)
    {
        cout << "Queue Underflow \n";
        return;
    }
    else
    {
        cout << "Element deleted from queue is : " << q[f] << endl;
        f++;
    }
}

void display()
{
    if (f == -1)
    {
        cout << "Queue is empty!\n ";
    }
    else
    {
        cout << "Queue elements are : \n";
        for (int i = f; i <= r; i++)
            cout << q[i] << " ";
        cout << endl;
    }
}

int main()
{

    int ch;
    cout << "Enter your choices to access your queue: \n\n";
    cout << "1. To Enque your queue, enter your element: \n";
    cout << "2. To Deque your queue: \n";
    cout << "3. To display the front of Queue: \n";
    cout << "4. Exit! \n";

    while (1)
    {
        cout << "Enter your choice: \n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            enque();
            break;
        case 2:
            deque();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid choice bruh! \n";
        }
    }
    return 0;
}