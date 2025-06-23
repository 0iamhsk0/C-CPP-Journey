#include <iostream>
using namespace std;
template <class T>

class ABC
{
    T a,b;
    public:
    void get()
    {
        cout << "Enter two number:";
        cin >> a>> b ;
    }
    void show()
    {
        cout << a+b;
    }
};

int main()
{
    ABC <int> ob1;
    ABC <float> ob2;
    ob1.get();
    ob1.show();
    ob2.get();
    ob2.show();
}