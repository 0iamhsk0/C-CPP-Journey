#include <iostream>
using namespace std;
class A
{
    public:
    int n = 909;
};
int main() {
    A ob;
    int A :: *p = &A :: n;
    cout << "The value of n is: " << ob.*p;
}