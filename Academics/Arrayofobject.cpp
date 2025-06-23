// WAP having class name emp having private data members id. Create a member function to get the the record and print the record of three employees.
#include <iostream>
#include <string>
using namespace std;
class emp
{
private:
  int id;
  string name;
  char s[20];

public:
  void getdata();
  void putdata();
};
void emp::getdata()
{
  cout << "\n Enter the id of employee ";
  cin >> id;
  cout << "\n Enter your name ";
  cin.ignore();
  cin.getline(s, 20);
  // cout << "\n Enter employee name ";
  // getline(cin, name);
}
void emp::putdata()
{
  cout << "\n Entered age is:" << id;
  cout << s;
}
int main()
{
  emp obj[3];
  for (int i = 0; i < 3; i++)
  {
    // cout<<"emp["<<1<<"]id="
    cout << "\n Enter detail of employee number " << i + 1;
    obj[i].getdata();
  }
  for (int i = 0; i < 3; i++)
  {
    cout << "\n Details of the employee number " << i + 1;
    obj[i].putdata();
  }

  return 0;
}