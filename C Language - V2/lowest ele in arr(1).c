//lowest element in the array

#include<stdio.h>
main(){
	int arr[1000],a,le,x,n=1	;
	printf("Enter the number of element you want: ");
	scanf("%d",&x);
	for(a = 0;a < x; a++){
		printf("Number %d: \n",n++);
		scanf("%d",&arr[a]);
	}
	le = arr[0];
	for(a=1;a<x;a++)
	if(le > arr[a])
	le = arr[a];

	printf("The lowest element is: %d",le);
 
}
