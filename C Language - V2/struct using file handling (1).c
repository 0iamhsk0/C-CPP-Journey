#include<stdio.h>   
struct student{
		char name[10];
		int roll;
		float marks;
	};	//aray within structures
struct student students[3]={{"Tina",12,88.123},{"Lack",34,71.82},{"may",12,93.72}
};
	
int main(){
	int x;
	FILE *fp;
	fp=fopen("pqr.txt","wb");
	fwrite(&students[x],sizeof(students[x]),1,fp);
	printf("RECORD SAVED IN FILE SUCCESSFULLY");
	fclose(fp);
	
}
