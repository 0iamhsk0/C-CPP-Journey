#include<stdio.h>
#include<conio.h>
int main(){
	int i;
	for(i=1;i<=15;i++){
		if(i==10){
			break;
		}
		printf("\n%d",i);
	}
	return 0;
}
