#include <stdio.h>
int main()
{
    int a[10][10], transpose[10][10], r, c, i, j;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

    // Storing elements of the matrix
    printf("\nEnter elements of matrix:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Enter element a%d%d: ",i, j);
            scanf("%d", &a[i][j]);
        }
    }
    // Displaying the matrix a[][] */
    printf("\nEntered Matrix: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d  ", a[i][j]);
        }
                printf("\n\n");
    }
 // Finding the transpose of matrix a
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            transpose[i][j] = a[j][i];
        }
    }

    // Displaying the transpose of matrix a
    printf("\nTranspose of Matrix:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d  ",transpose[i][j]);
        }
            
                printf("\n\n");
    }

    return 0;
}

