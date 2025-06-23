#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;
    scanf("%f",&marks);
    if(marks>90)
	{
    	printf("Grade A");
	}
	else if(marks>70){
		printf("grade:b");
	}
	else if(marks>60)
	{
		printf("grade:d");
	}
	else
	{
		printf("enter valid marks:");
		scanf("%d",&marks);
	}
    return 0;
    
}
