
#include <stdio.h>
main(){
	
	int a,b,c;
	printf("Enter a number to calc the table: \n");
	scanf("%d",&b);
	printf("Enter a number to calc the table upto the series: \n");
	scanf("%d",&c);

	
	
	for(a = 1;a<=c; a++)
	{
		printf("%d * %d = %d \n",b,a,a*b);
	}
}

/*
#include <stdio.h>
main(){
	
	int a;
	for(a = 10; a>0; a=a-1){
		if(a<8)
		break;
	printf("%d\n",a);
}
}*/
