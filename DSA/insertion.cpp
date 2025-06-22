#include <iostream>
using namespace std;

int main()
{
    int a[11], n, i, no, pos;  // Increase array size to 11 to accommodate the new element
    // size
    cin >> n;
    // elements
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    // entering the position of the element to insert and the element
    cin >> no;
    cin >> pos;
    
    // Move elements to the right to make space for the new element
    for (i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos] = no;

    // printing the updated array
    for (i = 0; i < n + 1; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
