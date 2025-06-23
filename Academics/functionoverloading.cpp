////Example to show Function Overloading by different number of arguments 
#include <iostream> 
using namespace std; 
class load                           //load is name of class 
{ 
public: 
int sum (int x, int y)          //sum () adding two nos 
    { 
    cout << x+y<<endl; 
    } 
int sum (int x, int y, int z)   //sum () adding two nos 
    { 
    cout << x+y+z; 
    } 
}; 
int main () 
{ 
load ob; 
cout<<"Sum of numbers by Function overloading method 1 :\n"; 
ob.sum (10,20);  // sum() with 2 parameter will be called 
ob.sum(10,20,30);  //sum() with 3 parameter will be called 
return 0; 
}