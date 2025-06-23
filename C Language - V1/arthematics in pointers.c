#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int*p1,*p2;
	p1=arr;
	p1++;
	printf("\n%d",*p1);
	p1--;
	printf("\n%d",*p1);
	p1=p1+2;
	printf("\n%d",*p1);
	p1=p1-2;
	printf("\n%d",*p1);
	p2=&arr[4];
	printf("\n%d",p2-p1);
	while(p1<=p2){
		printf("\n%d",*p1);
		p1++;
	}
	return 0;
}
