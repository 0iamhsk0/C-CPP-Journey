// WAP TO ACCEPT SOME ELEMENTS INTO AN ARRAY AND(CHAR) AND FIND THE OCCURANCE OF EACH CHAR

#include <iostream>
using namespace std;
int main()
{
    int n, a[10];
    // range
    cin >> n;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i <= n - 1; i++)
    {
        if a
            [i] == a[i + 1]
            {
                cout << "Occurance of element is: " << a[i];
            }
    }
}