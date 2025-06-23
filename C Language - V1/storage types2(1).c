#include<stdio.h>
#include<conio.h>
int main(){
	function();
	function();
	function();
	return 0;
}
void function()
{
	int a=10;
	static int b=10;
	printf("\nValue of a:%d,value of b:%d",a,b);
a++;
b++;
}
