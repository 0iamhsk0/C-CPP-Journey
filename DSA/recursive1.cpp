#include <iostream>
using namespace std;

int recur_add(int n)
{
    if (n == 1)
    {
        return 1;
    }

    else if (n == 0)
        return 0;

    else
    {
        return n + recur_add(n - 1);
    }
}
int main()
{
    int N;
    cout << "Enter the number which is to find the sum" << endl;
    cin >> N;
    cout << recur_add(N) << endl;
    return 0;
}