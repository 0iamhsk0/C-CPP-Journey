//highest element in the array

#include<stdio.h>
main(){
	int arr[10],a,he;
	printf("Enter the elements: ");
	for(a=0;a<10;a++)
	scanf("%d",&arr[a]);
	he = arr[0];
	for(a=1;a<10;a++)
	if(he<arr[a])
	he = arr[a];

	printf("The greatest element is: %d",arr[a]);
}
