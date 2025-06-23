#include<stdio.h>
#include<conio.h>
int main(){
    FILE *fp;
    fp=fopen("file1.txt","w");
    if(fp==NULL){
        printf("file not found");
    }
    fclose(fp);
}
