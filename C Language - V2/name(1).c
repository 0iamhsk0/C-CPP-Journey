#include <stdio.h>
#include <conio.h>
main(){
	char n[100],address[200],rollno[2];
	int regno,sem;
	long long int mbno[10];
	float cgpa;
	
	
	
	//[100] means it can store upto 100 characters
	printf("Enter your name: \n");
	scanf("%[^\n]s",&n);
	printf("Enter your address: \n");
	fflush(stdin);
	scanf("%[^\n]s",&address);
	fflush(stdin);
	printf("Enter your roll number: \n");
	fflush(stdin);
	scanf("%[^\n]s",&rollno);
	printf("Enter your registrstion no.: \n");
	scanf("%d",&regno);
	printf("Enter your current semister: \n");
	scanf("%d",&sem);
	printf("Enter your mobile number: \n");
	fflush(stdin);
	scanf("%[^\n]llf",&mbno);
	printf("Enter your CGPA: \n");
	scanf("%f",&cgpa);
	
	//means it is saving till \n
	printf("Your name is: %s\n",n);
	printf("Your registrstion no. is: %d\n",regno);
	printf("Your roll number is: %s\n",rollno);
	printf("Your address is: %s\n",address);
	printf("Your current semister is: %d\n",sem);	
	printf("Your mobile number is: %lli\n",mbno);
	printf("Your CGPA scored is: %.2f\n",cgpa);
	
}



