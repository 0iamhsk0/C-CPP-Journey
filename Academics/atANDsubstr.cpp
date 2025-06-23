#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s1 = "welcome";
    string s2;
    s2 = s1.at(4); // accessing the element at that location
    cout << s2 << endl;
    s2 = s1.substr(0, 3); // if want wel then give 0 to 3, not 0 to 2 as i char extra in case of string
    cout << "I am   " << s2;
    return 0;
}
