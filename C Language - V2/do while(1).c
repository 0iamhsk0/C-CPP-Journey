/*
#include <stdio.h>
main(){
	
	int a,n,b;
	printf("Enter the number for table: ");
	scanf("%d",&n);
	printf("Enter the number for table to generte the multiple: ");
	scanf("%d",&b);
	a = 1;
	
	do{
		printf("%d * %d = %d\n",n,a,n*a);
		a++;
	}
	while(a <= b);

}

#include <stdio.h>
main(){
	
	int n;
	for (n = 10; n>0; n = n-1){
		if(n%2==1){
			continue;
		}
	printf("%d\n",n);
	}
}*/

#include <stdio.h>
main(){
	
	int n = 10;
	while(n>0){
		printf("%d",&n);
		if (n%2==1)
		continue;
		n = n-1;
	}
}

