#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int x,y;
	printf("Enter the values:");
	scanf("%d %d",&x,&y);
	printf("The squarest is:%f,%f",sqrt(x),sqrt(y));
	printf("\nThe exponential is:%f,%f",exp(x),exp(y));
	printf("\nThe logarithm func is:%f,%f",log(x),log(y));
	printf("\nThe abs value is:%f,%f",fabs(x),fabs(y));
	printf("\nThe ceil value is:%f,%f",ceil(x),ceil(y));
	printf("\nThe floor value is:%f,%f",floor(x),floor(y));
	printf("\nThe pow value is:%f",pow(x,y));
	printf("\nThe reminder value is:%f",fmod(x,y));
	printf("\nThe sin value is:%f",sin(x));
	return 0;
}
