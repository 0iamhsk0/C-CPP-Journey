#include<stdio.h>
#include<conio.h>
int main(){
	float average,total;
	int counter;
	printf("Enter the total in float value:");
	scanf("%f",&total);
	printf("Enter the counter in integer value:");
	scanf("%d",&counter);
	average=total/counter;
	printf("The average value is:%f",average);
	return 0;
}
