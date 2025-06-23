#include <iostream>
#include <string>
using namespace std;
class Student
{
  int rollno;
  string name;

public:
  void get(int r, string n)
  {
    rollno = r;
    name = n;
  }
  void show()
  {
    cout << "Roll No. is: " << rollno << "\nName is: " << name;
  }
};
int main()
{
  int roll;
  string name;
  cout << "Enter roll: ";
  cin >> roll;
  cout << "Enter name: ";
  cin >> name;
  Student *ob;
  ob = new Student;
  (*ob).get(roll, name);
  ob->show();
  return 0;
}