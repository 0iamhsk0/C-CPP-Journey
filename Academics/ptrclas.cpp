#include <iostream>
using namespace std;
class A
{
  int *arr;
  int size;

public:
  void get(int n)
  {
    size = n;
    arr = new int[size];
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++)
    {
      cin >> *(arr + i);
    }
  }
  void add()
  {
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
      sum = sum + *(arr + i);
    }
    cout << "Sum = " << sum;
  }
};
int main()
{
  int n;
  A ob;
  cout << "Enter the size of array: ";
  cin >> n;
  ob.get(n);
  ob.add();
  return 0;
}