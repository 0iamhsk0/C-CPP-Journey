#include <iostream>
using namespace std;
int main()
{
  void f1(); // f1() function declared
  f1();      // f1()  function called
  f1();
  f1();
}
void f1() // defination(body) of function f1()
{
  static int c = 2;
  c = c + 1;
  cout << "\nvalue of c = " << c;
}