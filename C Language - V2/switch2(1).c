// WAP for area of circle in one case, circumfrence, area of rectangle and temprature conversion

#include<stdio.h>
#define pi 3.14151

main(){
int choice, choice2;
float radius, len, width, temp;
printf("Enter your Choice here among the following:-\n");
printf("Enter 1 to calculate area of circle \n");
printf("Enter 2 to calculate circumfrence of circle \n");
printf("Enter 3 to calculate area of rectangle \n");
printf("Enter 4 to convert temp in \n\n");
printf("Enter your choice here: ");
scanf("%d",&choice);

switch (choice)
{
case 1:
printf("\n\nEnter radius here to calculate area: ");
scanf("%f",&radius);
printf("The area of circle is: %0.2f",3.14*radius*radius);
break;

case 2:
printf("\n\nEnter radius here to calculate circumfrence: ");
scanf("%f",&radius);
printf("Circumfrence pf the circle of given radius is: %0.2f",2*pi*radius);
break;

case 3:
printf("\n\nEnter length and width here seperated with to calculate area of rectangle: ");
scanf("%f %f",&len, &width);
printf("The area of rectangle is: %0.2f",len*width);
break;
case 4:
printf("In which units you want to enter your temperature: \n\n");
printf("Press 1 for Celsius to Fahrenheit\n");
printf("Press 2 for Fahrenheit to Celsius\n");
scanf("%d",&choice2);


switch(choice2){

case 1:
printf("\n\nEnter temperature in Celsius: ");
scanf("%f",&temp);
printf("Temperature in Fahrenheit will be: %0.2f",((temp*1.8)+32));
break;

case 2:
printf("\n\nEnter temperature in Fahrenheit: ");
scanf("%f",&temp);
printf("Temperature in Celsius will be: %0.2f",((temp-32)*0.556));
break;

default:
printf("Invalid Choice");
break;
}
break;
default:
printf("Invalid Choice");
break;
}

}
