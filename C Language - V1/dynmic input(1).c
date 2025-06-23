#include<stdio.h>
#include<conio.h>
int main()
{
//	char name;
	int rollno;
	float cgpa;
	char grade;
//	printf("Enter your name=");
//	scanf("%c",&name);
	printf("Enter your rollno=");
	scanf("%d",&rollno);
	printf("Enter yourcgpa=");
	scanf("%f",&cgpa);
	printf("Enter your grade=");
	scanf("%s",&grade);
	printf("\n Your rollno is=%d",rollno);
	printf("\n Your cgpa is=%f",cgpa);
	printf("\n Your grade is=%c",grade);
	return 0;
}
