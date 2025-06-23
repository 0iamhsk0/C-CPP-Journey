#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, arr[10],i;
    printf("enter:");
    scanf("%d",&num);
    for(i = 0; i < num; i++) {
    	printf("Enter:");
        scanf("%d", arr[i]);
    }


    /* Write the logic to reverse the array. 

    for(i = num; i > 0; i--){
         printf("%d ",arr[i]);
    }*/
    return 0;
}

