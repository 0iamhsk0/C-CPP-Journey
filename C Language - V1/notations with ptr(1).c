#include<stdio.h>
int main(){
	int a[100],n,i;
	int *p=a;
	printf("Enter the value of n: ");
	scanf("\n%d",&n);
	for(i=1;i<=n;i++){
		printf("Enter the values:");
		scanf("\n%d",&a[i]);
	}
	printf("\n%d",*(p+1));
	printf("\n%d",*(a+1));
	printf("\n%d",p[1]);
	printf("\n%d",1[p]);
	printf("\n%d",1[a]);
	return 0;
	
}
