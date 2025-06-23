#include<stdio.h>
#include<conio.h>
int main(){
	int a[100];
	int hold,i,j,n;
	printf("Enter value of n:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Data in original order");
	for(i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[j]>a[j+1]){
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
			}
		}	
	}
	printf("\nData in ascending order:");
	for(j=0;j<n;j++){
		printf("\n%d",a[j]);
	}
	return 0;
}
