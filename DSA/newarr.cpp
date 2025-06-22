#include <iostream>
using namespace std;
int main()
{
    int arr[20], n, ele, pos = -1;
    // entering the range
    cin >> n;
    // elements
    for (int i = 0; i <= n - 1; i++)
    {
        cout << "Enter the element for the array: ";
        cin >> arr[i];
        cout << endl;
    }
    // creation of array is done

    // printing elements in an array using pointer notation
    //*p means that p points to some address and we are accessing its value.
    cout << "The created array is: ";
    for (int *ptr = &arr[0]; ptr <= &arr[n - 1]; ++ptr)
    {
        cout << *(ptr) << " ";
    }
    cout << endl;

    // for deleting an element in the array:
    cout << "Enter the element which u want to delete: ";
    cin >> ele;

    // Find the position of the element to be deleted
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            pos = i;
            break; // Once found, exit the loop
        }
    }
    if (pos == -1)
    {
        cout << "Number not found!";
    }
    else
    {
        // Move elements to the left to overwrite the deleted element
        for (int i = pos; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--; // Decrease the size of the array

        // printing the updated array
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}
