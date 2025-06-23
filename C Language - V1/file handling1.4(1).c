#include<stdio.h>
#include<conio.h>
void main(){
	char ch[50];
	FILE *fp;
	fp=fopen("file1.txt","r");
	if(fp==NULL){
		printf("file not found");
	}
	while(fgets(ch,49,fp)!=NULL){
		printf("%s",ch);
	}
	fclose(fp);
}
