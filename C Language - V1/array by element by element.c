#include <stdio.h>
void value(int);
int main() {
    int arr[100],n;
    int i;
    printf("\nenter n:");
    scanf("%d",&n);
    printf("\nEnter the array elements:==>\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elements by values:");
    for(i=0;i<n;i++)
    {
        value(arr[i]);
    }
    return 0;
}
void value(int x)
{
    // int i;
    // for(i=0;i<size;i++)
    
        printf("%d ",x);
    
}
