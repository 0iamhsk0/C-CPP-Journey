#include <iostream>
using namespace std;

void reverseDeque(int deque[], int n)
{
    int left = 0, right = n - 1;

    while (left < right)
    {
        // Swap elements at left and right indices
        int temp = deque[left];
        deque[left] = deque[right];
        deque[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    int n;

    cout << "Enter the number of elements in the deque: ";
    cin >> n;

    int deque[n];

    cout << "Enter the elements of the deque separated by space: ";
    for (int i = 0; i < n; i++)
    {
        cin >> deque[i];
    }

    // Reverse the deque
    reverseDeque(deque, n);

    cout << "Reversed deque: ";
    for (int i = 0; i < n; i++)
    {
        cout << deque[i] << " ";
    }

    return 0;
}
