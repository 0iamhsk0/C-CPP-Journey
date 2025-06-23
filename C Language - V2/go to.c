
/*
#include <stdio.h>
main(){
	
	int n = 10;
	A:
		printf("%d\n",n);
		n = n - 1;
		if(n>0){
			goto A;
		}
}
*/

#include <stdio.h>
main(){
	
	int a;
	printf("Enter the number:  ");
	scanf("%d",&a);
	if(a%2==0){
		goto even;
	}
	else{
		goto odd;
	}
	even:
		printf("%d is even",a);
	return;
	odd:
		printf("%d is odd",a);
}
