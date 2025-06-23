#include<stdio.h>
#include<conio.h>
void main(){
	int i;
	char ch[20]={"hi hello"};
    FILE *fp;
    fp=fopen("file1.txt","w");
    if(fp==NULL){
        printf("file not found");
    }
    for(i=0;i<strlen(ch);i++){
    	fputc(ch[i],fp); 
	}
    fclose(fp);
}


