#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class Queue
{
private:
    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = nullptr;
        rear = nullptr;
    }

    void enqueue(int value)
    {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        if (rear == nullptr)
        {
            front = newNode;
            rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }

    int dequeue()
    {
        if (front == nullptr)
        {
            return -1; // Queue is empty
        }
        else
        {
            int value = front->data;
            Node *temp = front;

            if (front == rear)
            {
                front = nullptr;
                rear = nullptr;
            }
            else
            {
                front = front->next;
            }

            delete temp;
            return value;
        }
    }
};

int main()
{
    Queue queue;
    int value;

    cout << "Enter positive integers into the queue (Enter -1 to terminate input):\n";

    while (true)
    {
        cin >> value;

        if (value == -1)
        {
            break;
        }

        if (value > 0)
        {
            queue.enqueue(value);
        }
    }

    cout << "Dequeued elements: ";
    while (true)
    {
        int result = queue.dequeue();
        if (result == -1)
        {
            break;
        }
        cout << result << " ";
    }

    cout << endl;

    return 0;
}
