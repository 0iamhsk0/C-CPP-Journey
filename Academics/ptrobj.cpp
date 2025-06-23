#include <iostream>
using namespace std;
class A
{
  int x;

public:
  void get()
  {
    x = 30;
  }
  void show()
  {
    cout << x;
  }
};
int main()
{
  A *ob;
  ob = new A;
  ob->get();
  ob->show();
  return 0;
}
/*int main(){
  A ob1;
  A *ob;
  ob=&ob1;
  ob->get();
  ob->show();
}*/
/*int main(){
  A *ob;
  ob=new A;
  (*ob).get();
  (*ob).show();
}*/
