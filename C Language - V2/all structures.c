//embedding all structures in one code
#include<stdio.h>
struct student
{
	int rn;
	int mn[5];
	struct student2
	{
		float cgpa;
	}st2;
}s1,s2,s3[5],*s4;
main()
{
	int x;
	printf("enter reg no:");
	scanf("%d",&s1.rn);
	for(x=0; x<3;x++)
	{
		printf("enter %d mobile no:",x+1);
		scanf("%d",&s1.mn[x]);
	}
		printf("enter cgpa:");
		scanf("%f",&s1.st2.cgpa);
		for(x=0;x<3;x++)
		{
			printf("enter %d reg no:",x+1);
			scanf("%d",&s3[x].rn);
		}	
		s2=s1;	
	
	s4=&s2;
	printf("enter reg no:");
	scanf("%d",&(*s4).rn);
	printf("reg no. is %d \n",(*s4).rn );
	printf("reg no. is %d",s4->rn);
	printf("Memory taken: %d",sizeof(s1));
}




