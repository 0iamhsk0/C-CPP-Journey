// pointer to structure

#include<stdio.h>
struct student
{
    int rn;
    float cgpa;
}s1,*s2;     // s2 is the pointer object

int main()
{

    s2 = &s1;
    printf("Enter Registration number: ");
    scanf("%d",&(*s2).rn);
    printf("Enter CGPA: ");
    scanf("%f",&(*s2).cgpa);


    printf("\n The registration number is: %d",s2->rn);
    printf("\n CGPA IS: %.2f",(*s2).cgpa);



    return 0;
}
