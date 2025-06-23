#include<stdio.h>
#include<string.h>
void main(){
	char ch[20];
	gets(ch);
	puts(ch);
	printf("%d",strlen(ch));
	printf("\n%s",strrev(ch));
	printf("\n%sn",strupr(ch));
	printf("\n%s",strlwr(ch));
}
