#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,sum;
	printf("Enter the value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("The sum=%d",sum);
	return 0;
	
}
