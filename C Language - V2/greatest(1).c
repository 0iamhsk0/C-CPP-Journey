// find out the greater no b/w from given 3 no, using ladder if else nested if else

#include <stdio.h>
main(){
	int a,b,c;
	printf("Enter the value if a,b,c with one space sep:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c){
		printf("%d is greater than %d and %d ",a,b,c);
	}
	else{
		if((b>a) && (b>c)){
			printf("%d is greater than %d %d ",b,a,c);
		}
		else{
			printf("%d is greatest ",c);
		}
		if(a=b=c){
			printf("all are equal ");
		}
	}
	
	
}
