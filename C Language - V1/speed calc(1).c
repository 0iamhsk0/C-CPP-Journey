#include<stdio.h>
#include<conio.h>
int main()
{

	float speed,dist,time;
	
	printf("Enter your dist=");
	scanf("%f",&dist);
	printf("Enter your time=");
	scanf("%f",&time);
	speed=dist/time;
	printf("Your speed is=%f kmph",speed);
	return 0;
	
}
