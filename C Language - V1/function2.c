#include<stdio.h>
#include<conio.h>
int cube(int *n);
int main(void){
	int num=5;
	printf("The original value is:%d",num);
	cube(&num);
	printf("\nThe new num is:%d",num);
}
int cube(int *n){
	*n=*n * *n * *n;
}
