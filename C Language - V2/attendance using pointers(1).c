/*write a program as input find the percentage , if att is >=75 then allowed otherwise not allowed for exam

#include <stdio.h>
main()
{
	float *a,x,;
	printf("Enter your aggregate attendance percentage:");
	scanf("%f",&x);
	a = &x;
	if(*a >= 75)
	{
		printf("Candidate is allowed for exam");
	}
	else
	{
		printf("Candidate is not allowed for exam as aggregate attendance is <75%");
	}
}


#include <stdio.h>
main()
{
	int *p,sub[5],x,*px,ta = 0,*tap;
	for(x=0;x<5;x++)
	{
		printf("enter %d subject attendance: ",x+1);
		scanf("%d",&sub[x]);
	}
	p = sub;   //p = &sub[0];
	tap = &ta;
	for(x=0;x<5;x++)
	{
	printf("\nSubject %d attendance is: %d",x+1,*(p-x));
	
	*tap = *tap + *(p+x);
	}
	printf("\n\nTotal aggregate attendance is: %d",(*tap/5));
}*/



#include <stdio.h>
main()
{
	int *p,sub[5],x,*px,ta = 0,*tap;
	for(x=0;x<5;x++)
	{
		printf("enter %d subject attendance: ",x+1);
		scanf("%d",&sub[x]);
	}
	p = sub;   //p = &sub[0];
	tap = &ta;
	for(x=0;x<5;x++)   //for the last element 	for(x=4;x<4;x--)
	{
	printf("\nSubject %d attendance is: %d",x+1,*(p++));     //for the last element p--
	printf("\nThe address hold by p is: %p",p);
	
	*tap = *tap + *(p+x);
	}
	printf("\n\nTotal aggregate attendance is: %d",(*tap/5));
}



