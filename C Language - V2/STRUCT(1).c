//structure 

#include <stdio.h>
struct student   //which can carry any data type
{
	int rn;
	float cgpa;
	char grade;
	char name[100];
}s;    //s is the object of the structure student
main()
{
	printf("Enter registration no: ");
	scanf("%d",&s.rn);
	fflush(stdin);
	printf("Enter CGPA: ");
	scanf("%f",&s.cgpa);
	fflush(stdin);
	printf("Enter grade: ");
	scanf("%c",&s.grade);
	fflush(stdin);
	printf("Enter name: ");
	gets(s.name);
	printf("THE ADDRESS OF s is : %p",s);
	printf("\n\nThe record of student is: \n");
	printf("%d\n%.2f\n%c\n",s.rn,s.cgpa,s.grade,s.name);
	puts(s.name);
}
