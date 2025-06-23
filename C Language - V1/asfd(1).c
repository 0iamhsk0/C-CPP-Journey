#include <stdio.h>
int main()
{
  char  name[]="hello"; //string char array
  int i=0;
  while(name[i]!='\0') //untill null character
  {           
   printf("%c",name[i]);
   i++;
  }//end while
}//
