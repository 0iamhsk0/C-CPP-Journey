#include<stdio.h>
#include<conio.h>
int main(){
	struct emp{
		long int id;
		char name[50];
		float salary;
	};
	struct emp e;
	FILE *fp;
	char ch='y';
//	clrscr();
	fp=fopen("file2.txt","w");
	if(fp==NULL){
		printf("File not found");
	}
	while(ch=='y'){
		printf("\nenter the name\t id\t salary\t of the employee:");
		scanf("%s\t %ld\t %f\t",e.name,&e.id,&e.salary);
		fprintf(fp,"%s\t %ld\t %f\t",e.name,e.id,e.salary);
		printf("Another employee details(y/n)");
		ch=getche();
	}
	fclose(fp);
	return 0;
	getch();
}

