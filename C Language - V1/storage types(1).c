#include<stdio.h>
#include<conio.h>
void func1(){
	auto int a=10;
	printf("\na=%d",a);
}
void func2(){
	auto int a=20;
	printf("\na=%d",a);	
}

int main(){
	auto int a;
	func1();
	func2();
	printf("\na=%d",a);
	return 0;
}
