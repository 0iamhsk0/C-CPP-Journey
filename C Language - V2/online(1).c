/*#include <stdio.h>

int main() {
  int i,L;
  scanf("%d",&L);

  for (i = 0; i < L; i++) {
    scanf("%d\n", L);
  }
  
  return 0;
}

#include<stdio.h>
int main(){
int l,w,h,n; 
scanf("%d",&l); 
scanf("%d",&n); 
for(int i=1;i<=n;i++){     
	scanf("%d%d",&w,&h);     
	if(w>=l&&h>=l){         
		if(w==h)         
				printf("ACCEPTED\n");         
			else 
				printf("CROP IT\n");     
		}     
		else printf("UPLOAD ANOTHER\n"); 
	} 
		return 0;
}
*/
int main()

{

    int l,n,w,h;

    scanf("%d",&l);

    scanf("%d",&n);

    //scanf("%d %d", &w,&h);

    while(n)

    {   

        scanf("%d %d", &w,&h);


 

        if (w < l || h < l)    

            printf("\nUPLOAD ANOTHER");


 

        else

        {

            if(w==h)

            {

                printf("\nACCEPTED");

            }

            else if(w>=l && h>=l)

            {

                printf("\nCROP IT");

            }   

        }

        n--;

    }

}


 


