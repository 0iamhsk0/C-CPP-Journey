#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n, i,fact;
    fact = 1;
    scanf("%d", &n);
    if (n < 0){
        printf("1");
    }
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
    }
        printf("%d",fact);
    return 0;
}
}
