// You are using GCC
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void hipify(int a[], int n, int index)
{
    int largeindex = index;
    int L = 2 * index + 1;
    int R = 2 * index + 2;

    if (L < n && a[L] > a[largeindex])
    {
        largeindex = L;
    }
    if (R < n && a[R] > a[largeindex])
    {
        largeindex = R;
    }
    if (largeindex != index)
    {
        swap(a[largeindex], a[index]);
        hipify(a, n, largeindex);
    }
}
/*void maxheap(int a[],int n,int k)
{
    int val=a[k];
    int j=2*k+1;
    while(j<n)
    {
        if(j<n && a[j+1]>a[j])
            j=j+1;
        if(val>a[j])
            break;
        else
        {
            a[(j-1)/2]=a[j];
            j=2*j+1;
        }
    }
    a[(j-1)/2]=val;
}*/
void build_heap(int a[], int n)
{
    int k;
    for (k = (n / 2) - 1; k >= 0; k--)
    {
        hipify(a, n, k);
    }
    cout << "Max heap is created successfully! ";
    for (int i = n - 1; i > 0; i--)
    {
        swap(a[i], a[0]);
        hipify(a, i, 0);
    }
}
void deleteheap(int a[], int n)
{
    int index = 0;
    a[index] = a[n - 1];
    hipify(a, n, index);
}
int main()
{
    int a[30], n;
    cout << "Enter the range: ";
    cin >> n;
    cout << "Enter all the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    build_heap(a, n);
    cout << "MAX heap created succesfully !" << endl;
    cout << "MAX heap is: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    deleteheap(a, n);
    cout << "\nMax heap after deletion: ";
    for (int i = 0; i < n - 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << "The sorted elements are(heap sort:)\n";
    while (n > 0)
    {
        // cout << a[--n] << " ";
        deleteheap(a, n);
        n -= 1;
    }
    return 0;
}
