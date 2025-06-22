#include <iostream>
using namespace std;
int main()
{
    int a[10],n,i;
    //size
    cin >> n;
    //elements
    for(i = 0; i <= n-1; i++){
        cin >> a[i];
    }
    //elements are taken
    //printing the array
    for (i = 0; i <= n-1 ; i++){
        cout << a[i] << " ";
    }
    return 0;
}