#include<stdio.h>
#include<stdlib.h>
void main(){
	int a;
	scanf("%d",&a);
	char str[100];
	itoa(a,str,2);
	printf("\nBinary value:%s",str);
	itoa(a,str,10);
	printf("\ndecimal value:%s",str);
	itoa(a,str,16);
	printf("\nhexadecimal value:%s",str);
	itoa(a,str,8);
	printf("\noctal value:%s",str);
}
