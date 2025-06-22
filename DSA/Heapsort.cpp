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
void build_heap(int a[], int n)
{
    int k;
    for (k = (n / 2) - 1; k >= 0; k--)
    {
        hipify(a, n, k);
    }
    cout << "Maxheap is :";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    // heap sort
    for (int i = n - 1; i > 0; i--)
    {
        swap(a[i], a[0]);
        hipify(a, i, 0);
    }
}
/*void deleteheap(int a[],int n)
{
    int index=0;
    a[index]=a[n-1];
    hipify(a,n,index);
}*/
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
    cout << "\nThe Sorted Elements are(Heap sort): ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
