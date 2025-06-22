// Here's a C++ program to implement a queue using an array and perform the enqueue and dequeue operations as described:

#include <iostream>
using namespace std;

class Queue
{
private:
    int front;
    int rear;
    int maxSize;
    int *elements;

public:
    Queue(int size)
    {
        front = -1;
        rear = -1;
        maxSize = size;
        elements = new int[maxSize];
    }

    ~Queue()
    {
        delete[] elements;
    }

    void enqueue(int value)
    {
        if (rear == maxSize - 1)
        {
            cout << "Queue is full." << endl;
        }
        else
        {
            elements[++rear] = value;
        }
    }

    void dequeue()
    {
        if (front == rear)
        {
            cout << "Queue is empty." << endl;
        }
        else
        {
            cout << elements[++front] << " ";
        }
    }

    void dequeueAll()
    {
        while (front != rear)
        {
            dequeue();
        }
        cout << endl;
    }
};

int main()
{
    int size;
    cin >> size;
    Queue queue(size);

    for (int i = 0; i < size; i++)
    {
        int value;
        cin >> value;
        queue.enqueue(value);
    }

    cout << "Dequeuing elements: ";
    queue.dequeueAll();

    return 0;
}