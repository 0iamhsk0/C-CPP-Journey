#include <stdio.h>
main()
/*{
	float per; //decelaring
	printf("Enter your percentage: ");
	scanf("%f", &per); //displaying input
	if(per >= 60.0000000){
		printf("Candidate is eligible for admission process");
	}
	else{
		printf("Candidate is not eligible for admission process");
	}
	
}



write a program to check wether the voter is elegible or not
{
	int age,voter_id;
	printf("Voter, pls enter your age: ");
	scanf("%d\n",&age);
	if(age >= 18)
	{
		printf("Candidate is eligible for voting!");
	}
	else{
		printf("Candidate is not eligible for voting!!");
	}
}*/
/* write a program to check the admission criteria if the student having percentage
: 1: >=60 and <=70 10% fee concession 2: >=70 and <= 90 20% fee concession 3: >= 90 30% fee concession(use if or if else)*/
{
	float per;
	printf("Enter your acquired percentage in intermidiate: ");
	per = (int)per;
	scanf("%f",&per);
	if(per >= 60.000 && per < 70.000){
		printf("Candidate acquired 10% fee scolorship");
	}
	if(per >= 70.000 && per < 90.000){
		printf("Candidate acquired 20% fee scolorship");
	}
	if(per >= 90.000){
		printf("Candidate acquired 30% fee scolorship");
	}
	if(per < 60.000){
		printf("!!Search another UNI!!");
	}
}



