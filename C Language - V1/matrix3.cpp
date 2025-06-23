#include<stdio.h>
#include<conio.h>
int main(){
	int n,a[3][3],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\nEnter the values os a[%d][%d]:",i,j);
				scanf("\n%d",&a[i][j]);
		}
	}
	printf("Elements of 2d matrix are:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
