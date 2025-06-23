#include <stdio.h>
main()
{
	int a;
	printf("Enter thr value of a: ");
	scanf("%d",&a);
	if (a<10){
		printf("%d is less than 10",a);
	}
	else if(a<100){
		printf("%d is less than 100 but greater than 10",a);
	}
	else {
		printf("%d is more than 100",a);
	}
}
