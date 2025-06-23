#include<stdio.h>
#include<stdlib.h>
void ftoa1(float f1,char s[])
{
	sprintf(s,"%f",f1);
}
int main(){
	char str[20];
	float f=12.300000;
	ftoa1(f,str);
	printf("\n%s",str);
}
