#include <iostream>
#include <string>
using namespace std;
main()
{
    string s1("bcme");
    string s2("abcrome");

    cout << "s1 = " << s1 << endl;
    cout << "s2= " << s2 << endl;
    /*s1.insert(4, s2);
    cout << "after change 0 " << s1 << endl;
    s1.insert(4, s2, 1, 1);
    cout << "after change 1 " << s1 << endl;
    s1.erase(4, 5);
    cout << "after change 3 " << s1 << endl;
    s3.erase(0, 2);
    cout << "after change 3 " << s3 << endl;
    s2.replace(1, 3, s1);
    cout << "after change 4 " << s2 << endl;
    s2.replace(1, 0, s1, 0, 2);
    cout << "after change 4 " << s2 << endl;
    s1.append(s2, 0, 2);
    cout << s1;
    cout << s1.compare(s2);*/
    cout << s1.compare(2, 2, s2, 5, 2);
}