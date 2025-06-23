#include<stdio.h>
int main(){
	double radius,area=0.0;
	double *pradius=&radius,*parea=&area;
	printf("Enter the radius of the circle:");
	scanf("%if",pradius);
	*parea=3.14*(*pradius)*(*pradius);
	printf("\nThe area of the circle with radius %.2if=%.2if",*pradius,*parea);
	return 0;
}
