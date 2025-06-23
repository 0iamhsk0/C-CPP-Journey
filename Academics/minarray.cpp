#include <iostream>

void minarr(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    std::cout << "The minimum element in the array is: " << min << std::endl;
}

int main()
{
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int arr[100]; // You can change the size as needed

    std::cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    minarr(arr, n); // Pass the array and its size to the function

    return 0;
}
