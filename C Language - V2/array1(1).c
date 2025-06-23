#include<stdio.h>
main(){
	int reg[6];
	int a,n=1;
	char grade[72], name[72];
	float cgp[72];
/*	printf("Enter the  array: ");
	scanf("%d",&reg[3]);
	printf("%d",reg[3]);*/
	
	for(a=0;a<=3;a++){
	
	printf("Student %d:",n++);	
	printf("\n\nEnter the name: ");
	gets(name);
	printf("Entered name is: \n");
	puts(name);
	fflush(stdin);
	
	printf("Enter the reg: ");
	scanf("%d",&reg[a]);
	printf("%d",reg[a]);
	
	printf("\nEnter the cgp: ");
	scanf("%f",&cgp[a]);
	printf("%.2f",cgp[a]);
	fflush(stdin);
	
	printf("\nEnter the grade: ");
	grade[a] = getchar();
	putchar(grade[a]);
	printf("\n\n");
	fflush(stdin);
	//scanf("%c",&grade[a]);
	//printf("%c",grade[a]);
	
}
}
