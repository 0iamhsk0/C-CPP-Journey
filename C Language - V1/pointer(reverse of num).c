//Reverse of a number using Pointer
#include <stdio.h>
int main(){
	int n, reversednumber=0, remainder;
	int *pn, *prn, *pr;
	pn=&n;
	prn=&reversednumber;
	pr=&remainder;
	printf("Enter a Integer : ");
	scanf("%d", pn);
	while(*pn!=0){
		*pr=*pn%10;
		*prn=*prn*10+*pr;
		*pn=*pn/10;
	}
	printf("Reversed Number = %d", *prn);
}
