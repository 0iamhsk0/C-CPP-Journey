#include<iostream>
using namespace std;   
void show (int x)
{
    x = x+30;
    cout << "formal" << x << endl;
}
main()
{
    int x = 30;
    cout << "Before action " << x << "\n";
    show(x);
    cout << "Actual" << x << "\n";
}