#include <iostream>

using namespace std;
int i, pivot, j;
int partition(int a[], int low, int high)
{
    pivot = a[low];
    i = low;
    j = high;

    while (i < j)
    {
        do
        {
            i++;
        } while (a[i] < pivot);
        do
        {
            j--;
        } while (a[j] > pivot);
        // if i < j then only swap
        if (i < j)
            swap(a[i], a[j]);
    }
    swap(a[low], a[j]);
    return j;
}

void quicksort(int a[], int low, int high)
{
    if (low < high)
    {
        int j = partition(a, low, high); // the returned value j gives us the partiton of the array
        quicksort(a, low, j);
        quicksort(a, j + 1, high);
    }
}

int main()
{
    int x, i;
    cout << "Enter the range";
    cin >> x;
    int n = x + 1;
    int a[n];
    cout << "Enter the elements";
    for (i = 0; i < x; i++)
        cin >> a[i]; // take a big value at the end of the array so that we can compare
    a[i] = 999;

    quicksort(a, 0, n - 1);
    cout << "Soted elements are: \n";
    for (i = 0; i < x; i++)
    {
        cout << a[i] << " ";
    }
}
