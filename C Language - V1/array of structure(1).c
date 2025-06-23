#include<stdio.h>
#include<conio.h>
struct student{
	int r;
	float m;
	char n[20];
};
int main(){
	int i;
	struct
	 student s1[5];
	for(i=0;i<5;i++){
		printf("Enter the rollno:");
		scanf("%d",&s1[i].r);
		printf("Enter the cgpa:");
		scanf("%d",&s1[i].m);
		printf("Enter the name of student:");
		scanf("%s",&s1[i].n);
	}
	printf("%d,%f,%s",s1[i].r,s1[i].m,s1[i].n);
	return 0;
}
