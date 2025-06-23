#include<stdio.h>
#include<conio.h>
int main(){
	int a[10][10],sum=0,i,j,r,c;
	printf("Enter the rows and coloumns");
	scanf("%d%d",&r,&c);
	printf("Enter elements:");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i==j){
				sum=sum+a[i][j];
			}
		}
	}
	printf("Sum of the diagonal elements are:%d",sum);
	return 0;
}
