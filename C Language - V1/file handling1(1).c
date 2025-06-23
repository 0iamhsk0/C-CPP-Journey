#include<stdio.h>
int main(){
	FILE *fptr;
	fptr=fopen("a.txt","w");
	if(fptr==NULL){
		printf("\n file cannot be displayed");
	}
	else
	{
		printf("\n file created successfully");
	}
	return 0;
}
