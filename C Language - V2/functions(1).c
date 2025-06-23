
/**#include <stdio.h>
int sum();  //function declaration (function with return type and without parameters)

//telling the compiler

main(){
//func call is always in the main func
	int z;
	z = sum();  //func call
	printf("Sum is %d",z);
	sum();
}
//func def is always out of the func call block
int sum() //func definiton
{
	int x = 3,y = 4;
	return x+y;	
}



//1.function without return type and without parameters
#include <stdio.h>
void sum(){
	int x = 3, y = 4;
	printf("Sum is %d", x+y);
}
main(){
	sum();
}



//2.PARAMETER PASSING -CALL BY VALUE AND CALL BY REFERENCE 
//with return without parameters
#include <stdio.h>
void sum(int x, int y){
	printf("sum is %d",x + y);
}
main(){
	int x,y;
	printf("Enter the values of x and y: \n");
	scanf("%d %d",&x,&y);
	sum(x,y);
}


//3. Now 3rd model
//function without return type and with parameters

#include <stdio.h>
void sum(int x,int y){
		printf("Sum is:%d",x+y);
}
main(){
	//int x=2,y=4;
	//sum(x,y);
	int x,y;
	printf("Enter the values of x and y:");
	scanf("%d %d",&x,&y);
	sum(x,y);
}


//4. with return tyoe and with parameters
#include <stdio.h>
int sum(int a, int b){
	return a+b;
}
main(){
	int x,y,z;
	printf("Enter the values of x and y: \n");
	scanf("%d %d",&x,&y);
	z = sum(x,y);
	printf("sum is %d",z);
}




//write a programme to print  a table to function without return type and with parameter 
//swap case with return type and without parameter

#include <stdio.h>
void multi(int a, int b, int c){
	for (a = 0;a<=c; a++){
		printf("%d * %d = %d\n",b,a,a*b);
	}
}
main(){
	int a,b,c;
	printf("Enter the values of the table (x) and multiplier (y) :\n");
	scanf("%d %d",&b,&c);
	multi(a,b,c);
	
}*/

#include <stdio.h>

