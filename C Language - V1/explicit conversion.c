#include<stdio.h>
#include<conio.h>
int main(){
	int average,total;
	float counter;
	printf("Total value:");
	scanf("%d",&total);
	printf("Counter value:");
	scanf("%f",&counter);
	average=total/ counter;
	printf("Average is:%d",average);
}
