//write a program to enter student name, students name, cgpa, reg no, roll no ,mobile no

#include <stdio.h>
#include <conio.h>
main()
{
	int reg,sem;
	char name[20];
	long long int mobl;
	float cgpa;
	char grade;
	printf("Enter your name, registration number ,mobile , sem, cgpa aquired, grade acquired:\n");
	gets(name);
	scanf("%d\n %lli\n %d\n %f\n \n%c",&reg,&mobl,&sem,&cgpa,&grade);
	printf("ur name is: ");
	puts(name);
	printf("ur rgd no is:%d\n",reg);
	printf("ur mbno is:%lli\n",mobl);
	printf("ur present sem is:%d\n",sem);
	printf("ur cgpa acquired is:%.2f\n",cgpa);
	printf("ur grade acquired is: %c\n\n",grade);
	
	printf("The Student Details are:\n\n");
	printf("Student name: ");
	puts(name);
	printf("Student registration number: %d\nStudent phno: %lli\nStudent current sem is: %d\nStudent CGPA acquired :%.2f\nStudent grade acquired %c",reg,mobl,sem,cgpa,grade);
}
