#include<iostream>
using namespace std;
int main()
{
	int x = 4;
	float y = 5.5;
	//A void pointer
	void *ptr;
	ptr = &x;
	cout<<"Integer variable is = "<<( *(int*) ptr) ;
	// void pointer is now float
	ptr = &y;
	cout<<"\nFloat variable is= "<< ( *(float*) ptr) ;
	return 0;
}
