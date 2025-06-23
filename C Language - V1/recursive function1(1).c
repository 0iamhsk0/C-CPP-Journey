#include<stdio.h>
#include<conio.h>
int fact(int x);
int main(){
	int n,result;
	printf("Enter the number:");
	scanf("%d",&n);
	result=fact(n);
	printf("The factorian of given number is:%d",result);
	return 0;
}

int fact(int x){
	if(x==0){
		return 1;
	}
	else {
	return x*fact(x-1);
	}
}
