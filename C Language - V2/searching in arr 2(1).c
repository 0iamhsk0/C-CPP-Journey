#include<stdio.h>
main(){
	int arr[10],a,se,sc = 0;
	printf("Enter the elements: ");
	for(a=0;a<10;a++)
	scanf("%d",&arr[a]);
	printf("enter the element u want to search: ");
	scanf("%d",&se);
	for(a=1;a<10;a++)
		if(se == arr[a])
		{
			sc ++;
			break;
		}
		if (sc == 0){
		printf("Element not found");
		}
		printf("%d element is found at inder %d",se,a);
}
