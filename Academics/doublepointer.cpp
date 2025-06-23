 #include<iostream> 
using namespace std; 
    int main ()  
    {  
        int a = 10;  
        int *p;  
        int **pp;   
        p = &a; // pointer p is pointing to the address of a  
        pp = &p; // pointer pp is a double pointer pointing to the address of pointer p  
        cout<<"address of a:"<<p<<endl; // Address of a will be printed   
        cout<<"address of p:"<<pp<<endl; // Address of p will be printed  
        cout<<"value stored at p: "<<*p<<endl;
		cout<<"value stored at pp: "<<*pp<<endl; // value stoted at the address contained by p i.e. 10 will be printed  
        cout<<"value stored at pp: "<<**pp; // value stored at the address contained by the pointer stored at pp  
    } 

