#include <stdio.h>
#include<conio.h>

int main() {
    
    int n,digit,temp,sum=0;
    scanf("%d", &n);
    temp=n;
    //Complete the code to calculate the sum of the five digits on n.
    ;while(temp>0){
    	digit=temp%10;
    	sum=sum+digit;
    	temp=temp/10;
	}
    printf("%d",sum);
    return 0;
}
