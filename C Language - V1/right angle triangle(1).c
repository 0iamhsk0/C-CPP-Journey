#include<stdio.h>
#include<conio.h>
int main(){
	int i,j;
	printf("Displaying the table of right angled triangle\n");
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
