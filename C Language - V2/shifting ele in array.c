#include<stdio.h>
main(){
	int arr[11],a,in_ad,in;
	for(a=0;a<10;a++){
	printf("Enter the elements: ");
	scanf("%d",&arr[a]);
}
	printf("enter the element to add: ");
	scanf("%d",&in);
	printf("enter the element index to add: ");
	scanf("%d",&in_ad);
	
	for(a=9;a>=in_ad;a--){
		arr[a+1]=arr[a];
	}
	arr[in_ad]=in;
	printf("Now the array is:");
	for(a=0;a<11;a++)
	printf("%d  ",arr[a]);
}
