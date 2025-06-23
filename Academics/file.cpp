#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    {
        char s[80];
        ifstream inf("newfile.txt");
        inf.read(s, 80);
        cout << s;
        inf.close();
        return 0;
    }
}