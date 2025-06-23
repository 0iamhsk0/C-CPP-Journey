#include<stdio.h>
int main(){
	int *pnum;
	char *pch;
	float *pfnum;
	double pdnum;
	long *plnum;
	printf("\nSize of integer pointer=%d",sizeof(pnum));
	printf("\nSize of character pointer=%d",sizeof(pch));
	printf("\n Size of double pointer=%d",sizeof(pfnum));
	printf("\nSize of long pointer=%d",sizeof(pdnum));
	return 0;
}
