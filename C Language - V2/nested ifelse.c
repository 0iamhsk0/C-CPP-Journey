#include <stdio.h>
main()
{
	int a;
	printf("Enter thr value of a: ");
	scanf("%d",&a);
	
	if ((a<10) && (a<100)){
		printf("%d is less than 10 as well as less than 100",a);
	}
	else{
		if (a>100){
		printf("%d is greater than 100",a);}
		else{
			printf("%d is greater than 10 but less than 100",a);
		}
	}
}


