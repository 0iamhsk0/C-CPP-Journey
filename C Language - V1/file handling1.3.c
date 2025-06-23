#include<stdio.h>
#include<conio.h>
void main(){
	char ch[50];
	FILE *fp;
	fp=fopen("file1.txt","w");
	if(fp==NULL){
		printf("file not found");
	} 
	printf("Enter the string\n");
	gets(ch);
	fputs(ch,fp);
	fclose(fp);

}
