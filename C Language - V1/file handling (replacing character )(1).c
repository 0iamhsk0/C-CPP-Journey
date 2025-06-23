#include<stdio.h>
int main(){
	FILE*fp;
	char temp,name[10];
	printf("Enter the name of file:");
	scanf("%s",name);
	fp=fopen(name,"r");
	while((temp=getc(fp))!=EOF){
		if(temp=='x'){
			fseek(fp,-1,1);
			putc('y',fp);
		}
	}
	fclose(fp);
}
