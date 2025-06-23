
#include<stdio.h>
main(){
	int arr[5],a,b,swap,nos=0,nop=0;
	printf("Enter the elements: ");
	for(a=0;a<5;a++){
		scanf("%d",&arr[a]);
	}
	for(a=0; a<5; a++){
		for(b=0; b<5; b++){
			if(arr[b]>arr[b+1]){
				swap = arr[b+1];
				arr[b+1] = arr[b];
				arr[b] = swap;
				nos++;
			}
			nop++;
		}
		nop++;
	printf("The sorted array is: ");
	for(a=0; a<5; a++)
	printf("\t%d\t",arr[a]);
	}
	printf("The number of passes are: %d\n ",nop);
	printf("The number of swaps are: %d ",nos);
	

}
	

