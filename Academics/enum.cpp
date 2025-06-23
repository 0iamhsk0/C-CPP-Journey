#include <iostream>
using namespace std;

int main()
{
  enum days_of_week
  {
    sun,
    mon,
    tue,
    thu,
    fri,
    sat
  };
  days_of_week ob;
  ob = mon;
  cout << ob;
  return 0;
}