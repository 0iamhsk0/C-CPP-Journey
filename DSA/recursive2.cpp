#include <iostream>
using namespace std;

int recur_factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
    {
        return n * recur_factorial(n - 1);
    }
}
int main()
{
    int N;
    cout << "Enter the non negative number which is to find the factorial" << endl;
    cin >> N;
    cout << recur_factorial(N) << endl;
    return 0;
}