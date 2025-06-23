// array OF structure

#include<stdio.h>
struct student
{
  int rn[5];        // data members of structure
  float cgpa[5];
  char grade[5];
  char name[5][100];

}s1,s3;                //  s1, s3 are objects of structure of the student
//student s2,s4;         // s2, s4 are objects of structure


int main()
{
    int i;

    for(i=0;i<2;i++)
    {
        printf("Enter the Registration number of student %d: ",i+1);
        scanf("%d",&s1.rn[i]);
        printf("Enter the CGPA of student %d: ",i+1);
        scanf("%f",&s1.cgpa[i]);
        printf("Enter the GRADE of student %d: ",i+1);
        fflush(stdin);
        scanf("%c",&s1.grade[i]);
        printf("Enter the name of student %d: ",i+1);
        fflush(stdin);
        gets(s1.name[i]);
        printf("\n\n");
    }

    for(i=0;i<2;i++)
    {
        printf("%d. Registration Number: %d",i+1,s1.rn[i]);
        printf("\nCGPA: %.2f",s1.cgpa[i]);
        printf("\nGRADE: %c",s1.grade[i]);
        printf("\n");
        puts(s1.name[i]);
        printf("\n\n");
    }
    return 0;
}
