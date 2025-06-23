#include<stdio.h>
int main()
{
	 int a[]={1,2,3,4};
	 int *p=a,i;
	 p++;
	 *(p+1)=29;
	 p=p+1;
	 *p=23;
	 p--;
	 *(p+0)=12;
	 p=a;
	 for(i=0;i<4;i++)
           printf("%d ",*(p+i));
	return 0;
}

