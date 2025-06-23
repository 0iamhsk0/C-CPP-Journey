//write a program to find the sum of 10 integers

#include<stdio.h>
main(){
	int num[1000];
	int a,n=1,sum = 0,x;
	printf("Enter the number of element you want: ");
	scanf("%d",&x);
	for(a = 0;a < x; a++){
		printf("Number %d: \n",n++);
		scanf("%d",&num[a]);
	}
	for(a = 0;a < x; a++)
	sum = sum + num[a];
	printf("The sum of %d numbers is: %d",x,sum);
}
