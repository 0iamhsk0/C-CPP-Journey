#include<stdio.h>
#include<conio.h>
int main(){
	int a[100],n,i,sum=0;
	printf("\nEnter the number of elements");
	scanf("\n%d",&n);
	printf("\n Enter the array elements");
	for(i=0;i<n;i++){
		scanf("\n%d",&a[i]);
	}
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	printf("\n%d",sum);
	
	return 0;
}
