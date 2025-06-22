// WAP to delete a no. from maxheap or minheap

#include <iostream>
using namespace std;
void maxheap(int a[], int k, int n)
{
    int val = a[k];
    int j = 2 * k + 1; // modified
    while (j < n)      // modified
    {
        if ((j + 1 < n) && (a[j + 1] > a[j])) // modified
            j++;
        if (a[j + 1] > a[j])
            j = j + 1;
        if (val > a[j])
            break;
        else
            a[(j - 1) / 2] = a[j]; // modified
        j = 2 * j + 1;             // modified
    }
    a[(j - 1) / 2] = val; // modified
    return;
}

void build_heap(int a[], int n)
{
    int k;
    for (k = (n / 2) - 1; k >= 0; k--) // modified
    {
        maxheap(a, k, n);
    }
}

void heapify(int a[], int n, int index)
{
    int largeindex = index;
    int leftchild = 2 * index + 1;
    int rightchild = 2 * index + 2;
    if (leftchild < n && a[largeindex] < a[leftchild])
        largeindex = leftchild;
    if (rightchild < n && a[largeindex] < a[rightchild])
        largeindex = rightchild;
    if (largeindex != index)
    {
        swap(a[index], a[largeindex]);
        heapify(a, n, largeindex);
    }
}

void deleteheap(int a[], int n, int no)
{
    int index;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == no)
        {
            index = i;
            break;
        }
    }
    a[index] = a[n - 1];
    heapify(a, n, index);
}

int main()
{
    int n;
    int a[30];
    cout << "how many nodes u want to create: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) // modified
    {
        cin >> a[i];
    }
    build_heap(a, n);
    cout << "MAX heap is: ";
    for (int i = 0; i < n; i++) // modified
    {
        cout << a[i] << " ";
    }
    int no;
    cout << "Enter the no u want to del.";
    cin >> no;
    deleteheap(a, n, no);
    cout << "\nAfter deleting node: " << endl;
    for (int i = 0; i < n - 1; i++)
    {
        cout << a[i] << " ";
    }
}

// heap sort
