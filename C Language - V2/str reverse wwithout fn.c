#include<stdio.h> 
#include<string.h>  	
main(){
	int a,x;
	char name[25],name2[25];
	
	scanf("%s",&name);
	for(a=0;name[a]!='\0';a++){
		name2[a]=name[a];
	}
	name2[a]='\0';
	printf("%s",name2);
}
