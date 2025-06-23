#include <iostream>
using namespace std;
struct emp
{
  int id;
  float sal;
};
int main()
{
  emp ob;
  cin >> ob.id >> ob.sal;
  cout << "ID: " << ob.id << endl;
  cout << "sal: " << ob.sal;
}