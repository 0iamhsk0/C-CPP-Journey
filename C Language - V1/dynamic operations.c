#include<stdio.h>
#include<conio.h>
int main(){
	int a,b;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	printf("a&b = %d\n",a&b);
	printf("a|b = %d\n",a|b);
	printf("a^b = %d\n",a^b);
	printf("~a= %d\n",a=~a);
	printf("b<<1 = %d\n",b<<1);
	printf("b>>1 = %d\n",b>>1);
	return 0;
}
