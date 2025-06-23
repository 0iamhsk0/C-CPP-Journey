#include<stdio.h>
main(){
	int arr[10],a,se,li,mi,fi;
	printf("Enter the elements: ");
	for(a=0;a<10;a++)
	scanf("%d",&arr[a]);
	printf("enter the element u want to search: ");
	scanf("%d",&se);
	li = 10-1;
	for(a=0;a<10;a++){
		mi = (fi + li)/2;
		if(arr[mi]==se){
			printf("\n%d is at index: %d",arr[mi],mi);
			break;
		}
		else if(arr[mi]>se)
			li = mi-1;
		else
			fi = mi + 1;
	}
}
