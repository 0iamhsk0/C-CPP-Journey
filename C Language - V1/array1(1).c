#include<stdio.h>
#include<conio.h>
int main(){
	int n,i;
	printf("\n Enter the elements");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\n Enter array elements are:");
	for(i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
	return 0;
}
