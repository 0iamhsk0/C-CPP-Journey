#include <iostream>
int main()
{
  int a = 20, b = 10, c = 30;
  if (a > b)
  {
    if (a > c)
    {
      std::cout << a;
    }
    else
    {
      std::cout << c;
    }
  }
  else if (b > c)
    std::cout << b;
  else
    std::cout << c;
}