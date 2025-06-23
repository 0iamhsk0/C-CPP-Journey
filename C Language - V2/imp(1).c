//We have populated the solutions for the 10 easiest problems for your support.
//Click on the SUBMIT button to make a submission to this problem.
//no .of factors
#include<stdio.h>

int main()
{
	int n,k,ans=0,i;
	scanf("%d %d",&n,&k);
	
	for(i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		if(t%k==0)
		{
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
}

//We have populated the solutions for the 10 easiest problems for your support.
//Click on the SUBMIT button to make a submission to this problem.
//sum of digits

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while (t--){
	    int n,m,sum=0;
	    scanf ("%d",&n);
	    while(n>0){
	        
	        m=n%10;
	        n=n/10;
	    
	        sum=sum+m;
	    }
	        printf("%d\n",sum);
	}
	
	
	return 0;
}

//We have populated the solutions for the 10 easiest problems for your support.
//Click on the SUBMIT button to make a submission to this problem.
//palindrome no.
# include <stdio.h>
#include<math.h>
int main() {
	int a, rem, sum = 0;;
	scanf("%d", &a);
	while (a--) {

		int n;
		scanf("%d", &n);
		while(n!=0) {
			rem = n % 10;
			sum = sum * 10 + rem;
			n = n / 10;
		}
		printf("%d\n", sum);
		sum = 0;

		}
	return 0;

	}


//We have populated the solutions for the 10 easiest problems for your support.
//Click on the SUBMIT button to make a submission to this problem.
//sum  of first and last digits
#include <stdio.h>

int main()
{
    int ld,n,t,r;
    
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        ld = n%10;
        while(n>0) {r=n%10; n/=10;}
        printf("%d\n",r+ld);
    }
    return 0;
}



//to count the number of divivsors
#include<stdio.h>
main()
{
    int l,r,k;
    int ctr=0;
    int arr[10000];
    scanf("%d %d %d",&l,&r,&k);
    for(int i =l; i<=r; i++)
    {
        arr[i]=i;
        if(arr[i]%k==0)
        {
            ctr++;
        }
        
    }
printf("%d",ctr);
    
}
