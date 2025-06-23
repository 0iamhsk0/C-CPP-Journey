#include<stdio.h>
#include<string.h>
void main(){
	char s1[15],s2[15];
	int i;
	printf("\nenter the string:");
	gets(s1);
	i=0;
	while(s1[i]!='\0'){
		s2[i]=s1[i];
		i++;
	}	
	s2[i]='\0';
	printf("the s2 is:%s",s2);
	printf("\nthe length is:%d",i);
}
