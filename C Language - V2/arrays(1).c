#include <stdio.h>
void main(){
	int regno[5],a;
	float cgpa[5];
	char grade[5];
	printf("Enter the elements of the array regno : ");
	//for (a=0;a<5;a++)
	//scanf("%d%d%d%d%d",&regno[0],&regno[1],&regno[2],&regno[3],&regno[4]);
	for(a = 0; a<3; a++){
	scanf("%d",&regno[a]);
	fflush(stdin);
	scanf("%d",&cgpa[a]);
	fflush(stdin);
	scanf("%c",&grade[a]);
	fflush(stdin);
	printf("THE REG. NO. ARE: \n ");
	for (a=0;a<3;a++)
	printf("%d\n",regno[a]);
}
}
