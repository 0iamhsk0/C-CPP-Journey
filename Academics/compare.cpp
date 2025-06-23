#include<iostream>
#include<string>
using namespace std;
int main()
{
   string s1 = "abc";
   string s2 = "abc";   
   cout<<s1.compare(s2)<<"  Both are same \n";
   
   string s3 = "abc";
   string s4 = "def";   
   cout<<s3.compare(s4)<<"  abc comes before def \n";
   
   string s5 = "xbc";
   string s6 = "abc";   
   cout<<s5.compare(s6)<<"  x comes after a so +1 is output of compare \n";
   return 0;}
