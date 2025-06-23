#include <iostream>
using namespace std;
class Parameter{
    public:
    void sum (int a , int b, int c)
    cout <<"sum is: "<< a+b+c << endl;
};
int main(){
    Parameter ob;
    ob.sum(23 ,33, 0);
    return 0;
}