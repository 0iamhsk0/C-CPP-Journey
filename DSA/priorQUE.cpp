#include <iostream>
#include <queue>

struct Patient
{
    int data;
    int priority;

    bool operator<(const Patient &other) const
    {
        return priority > other.priority; // Lower priority value is higher priority
    }
};

int main()
{
    int N;
    std::cout << "Enter the number of patients in the priority queue: ";
    std::cin >> N;

    std::priority_queue<Patient> priorityQueue;

    for (int i = 0; i < N; ++i)
    {
        int data, priority;
        std::cout << "Enter patient data and priority (data priority): ";
        std::cin >> data >> priority;
        priorityQueue.push({data, priority});
    }

    std::cout << "Priority queue elements: ";
    if (priorityQueue.empty())
    {
        std::cout << "Priority queue is empty";
    }
    else
    {
        while (!priorityQueue.empty())
        {
            Patient patient = priorityQueue.top();
            priorityQueue.pop();
            std::cout << patient.data << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
