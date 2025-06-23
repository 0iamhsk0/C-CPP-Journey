#include <iostream>
using namespace std;
class A
{
public:
  int n = 909;
};
int main()
{
  A ob;
  int A::*p = &A::n; // How to define pointer to member.
  cout << "The value of n is: " << ob.*p;
}