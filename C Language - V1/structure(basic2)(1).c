#include<stdio.h>
struct student{
	char name[200];
	int rollno;
	float cgpa;
};
int main(){
	struct student locker;
//	char *name;
	printf("Enter name:");
	scanf("%s",&locker.name);
	printf("Enter the rollno:");
	scanf("%d",&locker.rollno);
	printf("Enter cgpa:");
	scanf("%f",&locker.cgpa);
	printf("\n%s %d %.2f",locker.name,locker.rollno,locker.cgpa);
	return 0;
}



