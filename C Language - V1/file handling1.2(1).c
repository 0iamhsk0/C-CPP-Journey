#include<stdio.h>
#include<conio.h>
void main(){
	char ch;
	FILE *fp;
	fp=fopen("file1.txt","r");
	if(fp==NULL){
		printf("file not found");
	}
	while(1){
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		printf("%c",ch);
	}
	fclose(fp);
}
