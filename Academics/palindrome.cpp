#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(const string &str)
{
    // Check if the string is empty or has only one character.
    if (str.length() <= 1)
    {
        return true;
    }
    // Start comparing characters from the beginning and the end of the string.
    int i = 0;
    int j = str.length() - 1;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    // If all characters match, the string is a palindrome.
    return true;
}
int main()
{
    // Get the input string from the user.
    string str;
    cout << "Enter a string: ";
    cin >> str;
    // Check if the string is a palindrome.
    bool is_palindrome = isPalindrome(str);
    // Print the appropriate message.
    if (is_palindrome)
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}