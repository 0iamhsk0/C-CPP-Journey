#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Entetr the range of the array: ";
    cin >> n;
    int a[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mergesort(a, 0, n - 1);
    cout << "Array element after"

        return 0;
}