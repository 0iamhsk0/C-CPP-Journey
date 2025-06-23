#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,x;
	printf("Enter value of x:");
	scanf("%d",&x);
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			if(j==x){
				continue;
			}
			printf("\n%d",j);
		}
		
	}
	return 0;
}
