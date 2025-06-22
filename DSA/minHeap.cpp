#include <iostream>
using namespace std;
void maxheap(int *arr, int k, int n)
{
    int val = arr[k];
    int j = 2 * k;
    while (j <= n)
    {
        if (arr[j + 1] < arr[j])
        {
            j++;
        }
        if (val < arr[j])
        {
            break;
        }
        else if (val > arr[j])
        {
            arr[j / 2] = arr[j]; // jhg
            j = 2 * j;
        }
    }
    arr[j / 2] = val;
}
void buildheap(int *arr, int n)
{
    int k;
    for (k = n / 2; k >= 1; k--)
    {
        maxheap(arr, k, n);
    }
}
int main()
{
    cout << "Enter the number of node: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter all the element: ";
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    buildheap(arr, n);
    cout << "\nMax Heap is: ";
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}