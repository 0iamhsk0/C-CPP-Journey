#include <iostream>
using namespace std;

int main()
{
    int a[11], n, i, no, pos = -1;  // Initialize pos to -1
    // size
    cin >> n;
    // elements
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    // entering the element to delete it 
    cin >> no;
    
    // Find the position of the element to be deleted
    for (i = 0; i < n; i++) {
        if (a[i] == no) {
            pos = i;
            break;  // Once found, exit the loop
        }
    }
    
    if (pos == -1) {
        cout << "Number not found!";
    } else {
        // Move elements to the left to overwrite the deleted element
        for (i = pos; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--;  // Decrease the size of the array
        
        // printing the updated array
        for (i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    }
    return 0;
}
