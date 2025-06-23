//write a program to to enter the marks of 6 subj and the find the percentage

#include <stdio.h>
main()
{
	int s1,s2,s3,s4,s5,s6,sum;
	float per;
	printf("Enter the marks of your best 6 subjects scored:\n");
	scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
	sum = s1+s2+s3+s4+s5+s6;
	per = sum/6;
	printf("The percentage aquired is: %.1f%%\n",per);
}


