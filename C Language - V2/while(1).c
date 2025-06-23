#include <stdio.h>
main(){
	int a,b,c;
	printf("Enter a number to calc the table: \n");
	scanf("%d",&b);
	printf("Enter a number to calc the table upto the series: \n");
	scanf("%d",&c);
	a = 0;
	while(a<=c){
		printf("%d * %d = %d \n",b,a,b*a);
		a++;
	}
	
}
