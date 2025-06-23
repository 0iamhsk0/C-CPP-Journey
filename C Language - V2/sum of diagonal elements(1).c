#include<stdio.h>
  int main()
  {
   int a[10][10],sum=0;
   int i,j,m,n;
   printf("Enter number of rows and column:");
   scanf("%d%d",&m,&n);
          printf("Enter Elements : ");
          for(i=0;i<m;i++)
              {
                  for(j=0;j<n;j++)
                      {
                         scanf("%d",&a[i][j]);
                      }
               }
              
 for(i=0;i<m;i++)
                      {
                          for(j=0;j<n;j++)
                              {
                                    if(i==j)
                                      {
                                          sum=sum+a[i][j];
                                       }
                               }
                       }
                   printf("Sum of Diagonal Elements = %d ",sum);
               
  }

