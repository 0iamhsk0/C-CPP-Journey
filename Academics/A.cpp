#include <iostream>
using namespace std;
class A
{
  static int c; // count variable is of type static and is in private scope
public:
  void get()
  {
    c = c + 1;
  }
  void show()
  {
    cout << "\n counting is = " << c;
  }
};
int A::c; // mandatory declaration
int main()
{
  A ob1, ob2;
  ob1.show();
  ob2.show();
  ob1.get();
  ob2.get();
}