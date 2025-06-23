#include<stdio.h>
#include<conio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int i;
	printf("\n Printing base address of the array:");
	printf("\n$u %u %u",a[i],a,&a);
	printf("\Printing address of all the elements");
	for(i=0;i<5;i++){
		printf("\n %u",&a[i]);
	}
	return 0;
}
