#include <iostream>
#include <string.h>
using namespace std;
int main()
{
   string s1 = "arlcome";
   string s2 = "wearomea";
   cout << s1.find("lc") << endl;         // o/p is 2
   cout << s2.rfind("ea") << endl;        // o/p is 6
   cout << s2.find_last_of("e") << endl;  // o/p is 6
   cout << s2.find_first_of("w") << endl; // o/p is 0

   // if anything other is seached garbage value will come

   cout << s2.find_last_of("1");
   return 0;
}
