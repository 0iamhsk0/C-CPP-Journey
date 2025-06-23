//Friend Class in C++
#include<iostream>
using namespace std;   
class A
{
    double accno;
    public:
    A ( )			// constructor of class A
    {accno= 12345;}
    friend class B;		//B is another class and is friend of a class
};			//closing class A
class B
{public:
	void show (A ob)	//ob is object created for class A
	{	cout<<"private details of class A:    ";
cout<<ob.accno;	}
void show1 (A ob)	//ob is object created for class A
	{	cout<<"\n\n private details of class A:      ";
ob.accno = ob.accno+10;
cout<<ob.accno;	}
};
int main ()
{A ob1;
B ob2;
ob2.show (ob1);     //ob2 (object of class B) will print private details of class A
ob2.show1 (ob1);  
return 0;}