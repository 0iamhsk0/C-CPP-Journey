#include <iostream>
#include <string>
using namespace std;
int main()
{
  string *ptr;
  string name = "rohan";
  ptr = &name;
  cout << "Address: " << ptr << endl
       << " value: " << *ptr;
}