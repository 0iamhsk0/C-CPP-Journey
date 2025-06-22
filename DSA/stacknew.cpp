#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    int choice;
    while (1)
    {
        cin >> choice;
        switch (choice)
        {
        case 1:
            int value;
            cin >> value;
            if (s.size() == 100)
            {
                cout << "Stack Overflow. Cannot perform the push operation." << endl;
            }
            else
            {
                s.push(value);
                cout << "Element " << value << " pushed onto the stack." << endl;
            }
            break;
        case 2:
            if (s.empty())
            {
                cout << "Stack Underflow. Cannot perform the pop operation." << endl;
            }
            else
            {
                int value = s.top();
                s.pop();
                cout << "Element " << value << " popped from the stack." << endl;
            }
            break;
        case 3:
            if (s.empty())
            {
                cout << "Stack is empty." << endl;
            }
            else
            {
                cout << "Elements in the stack: ";
                while (!s.empty())
                {
                    cout << s.top() << " ";
                    s.pop();
                }
                cout << endl;
            }
            break;
        case 4:
            cout << "Exiting the program." << endl;
            return 0;
        default:
            cout << "Invalid choice." << endl;
        }
    }
    return 0;
}