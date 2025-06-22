/*
Nayana is given an array of integers and wants to find the Next Greater Element (NGE) for each element in the array. The NGE for an element arr[i] is the first greater element to the right of arr[i] in the array. If there is no greater element to the right, the NGE is considered -1. She needs your help to write a program to find the Next Greater Element (NGE) for each element in an array using a stack-based approach.



Examples:

a) For any array, the rightmost element always has the next greater element as -1.

b) For an array that is sorted in decreasing order, all elements have the next greater element as -1.



Note: This is a sample question asked in Capgemini recruitment.

Input format :
The first line contains an integer n, representing the number of elements in the array.

The next line contains n space-separated integers, representing the elements in the array.*/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> findNGE(const vector<int> &arr)
{
    int n = arr.size();
    vector<int> nge(n, -1); // Initialize NGE array with -1
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[i] > arr[st.top()])
        {
            nge[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    return nge;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> nge = findNGE(arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << nge[i] << endl;
    }

    return 0;
}
