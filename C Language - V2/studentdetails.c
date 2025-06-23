/*wite a program to display regd no , mobile no, cgpa , sem, grade of a student*/

#include <stdio.h>
#include <conio.h>
main()
{
	int reg,sem;
	long long int mobl;
	float cgpa;
	char grade;
	printf("Enter your registration number ,mobile , sem, cgpa aquired, grade acquired:\n");
	scanf("%d \n%d \n%d \n%f \n%c",&reg,&mobl,&sem,&cgpa,&grade);
	printf("ur rgd no is:%d\n",reg);
	printf("ur mbno is:%lli\n",mobl);
	printf("ur present sem is:%d\n",sem);
	printf("ur cgpa acquired is:%f\n",cgpa);
	printf("ur grade acquired is: %c\n",grade);
	printf("The Student Details are:\n%d\n%d\n%lli\n%f\n% c",reg,sem,mobl,cgpa,grade);
}
