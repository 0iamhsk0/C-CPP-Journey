/*creating a calulator using arithemating operator

#include <stdio.h>
main(){
	int choice,a,b;
	printf("Enter your choice: (1-4) ");
	scanf("%d",&choice);
	printf("Enter the values of a and b: ");
	scanf("%d %d",&a,&b);
	switch(choice){
		case 1:
			printf("the sum is %d",a+b);
		break;
		case 2:
			printf("the sub is %d",a-b);
		break;
		case 3:
			printf("the multiplication is %d",a*b);
		break;
		case 4:
			printf("The div is %d",a/b);
		break;
		default:
			printf("the numbers are: %d %d",a,b);
		break;
	}
}*/



//creating a calulator using arithemating operator

#include <stdio.h>
main(){
	int choice,a,b;
	printf("Enter your choice: (s,-,*,d) ");
	scanf("%c",&choice);
	printf("Enter the values of a and b: ");
	scanf("%d %d",&a,&b);
	switch(choice){
		case 's':
			printf("the sum is %d",a+b);
		break;
		case '-':
			printf("the sub is %d",a-b);
		break;
		case '*':
			printf("the multiplication is %d",a*b);
		break;
		case 'd':
			printf("The div is %d",a/b);
		break;
		default:
			printf("the numbers are: %d %d",a,b);
		break;
	}
}

