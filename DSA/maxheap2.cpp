// WAP to delete the root of a max heap

#include <iostream>
using namespace std;

buildheap(int a[20], int n)

    int main()
{
    int n, a[20];
    cout << "Enter how many nodes you want: " << endl;
    cin >> n;
    cout << "Enter the elements: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    buildheap(a, n);
    cout << "Maxheap is: \n";
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}