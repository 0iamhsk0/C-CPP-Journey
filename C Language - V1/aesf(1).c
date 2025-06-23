#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5};
	int i,n;
	int *p;
	p=arr;
	printf("\nFirst value is %d",*p);
	p=p+1;
	printf("\nSecond value is %d",*p);
	*p=45;
	p=p+2;
	*p=2;
	printf("\nModified array is:");
	for(i=1;i<5;i++){
		printf("\n%d",arr[i]);
	}
	p=arr;
	for(i=0;i<n;i++){
		scanf("%d",(parr+i));
	}
	return 0;
}
