#include<stdio.h>
int main(){
	int i,min,max,n,arr[10];
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the elements");
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	max=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("\nMaximum element is: %d",max);
	printf("\nMinimum element is: %d",min);
	return 0;
}
