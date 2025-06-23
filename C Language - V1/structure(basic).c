#include<stdio.h>
#include<conio.h>
struct car{
	char *name;
	int seats;
	float price;
};
int main(){
	struct car mycar;
	mycar.name="BENTLI";
	mycar.price=850938543;
	mycar.seats=2;
	printf("%s %f %d \n",mycar.name,mycar.price,mycar.seats);
}
