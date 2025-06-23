//highest element in the array

#include<stdio.h>
main(){
	int arr[10],a,se;
	printf("Enter the elements: ");
	for(a=0;a<10;a++)
	scanf("%d",&arr[a]);
	printf("enter the element u want to search: ");
	scanf("%d",&se);
	for(a=1;a<10;a++)
	if(se == arr[a]){
	printf("The searched element %d is present",arr[a]);
	}
	else if(a == 9){
	printf("The searched element is not present");

	
	/*if(se == arr[a]){
	break;
	if (se != arr[a]){
	break;
	printf("Element is not found");
	}
	else;
	printf("element is present at index %d",se,a);*/
	

}
}
