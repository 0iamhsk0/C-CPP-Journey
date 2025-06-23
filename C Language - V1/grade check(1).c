#include<stdio.h>
#include<conio.h>
int main()
{
	int marks;
	printf("Enter marks:");
	scanf("%d",&marks);
	
	if(marks>90 && marks<=100){
			printf("grade:A+");
		printf("grade:A+");
		
	}
	else if(marks>80 && marks<=90){
		printf("grade:A");
	}
	else if(marks>70 && marks<=80){
		printf("grade:b");
	}
	else if(marks>60 && marks<=70){
		printf("grade:d");
	}
	else{
		printf("enter valid marks:");
		scanf("%d",&marks);
	}
}
