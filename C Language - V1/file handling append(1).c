#include<stdio.h>
#include<conio.h>
int main(){
	char ch[50];
	FILE *fp;
	fp=fopen("file1.txt","a");
	if(fp==NULL){
		printf("file not found");
	}
	printf("enter the data\n");
	gets(ch);
	fputs(ch,fp);
	fclose(fp);
}
