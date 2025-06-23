//class name is student, data members : roolno, name
//member functions :- getdata(), showdata()

#include<iostream>
#include<string>
using namespace std;
class Studentdetails
{   
    int roolno;
    char name[20];

    public:
    void get()
    {
        cout<<"enter roll no\n";
        cin >> roolno;
        cout << "Enter your Name\n";
        cin.ignore();
        cin.getline(name, 20);
    }
    void show()
    {
        cout << "\nRoll No: " <<roolno <<"\nName is: " << name;  //here we are using the member variable of class.
    }
};
int main(void)
{
    Studentdetails *attributes;
    attributes = new Studentdetails;
    attributes -> get();
    attributes -> show();
}
