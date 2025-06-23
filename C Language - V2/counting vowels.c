#include<stdio.h> 
  	
main(){
	char name[25];
	int x,count=0,count2=0;
	printf("Enter the name: ");
	scanf("%[^\n]s",&name);
	
	
		for (x=0;name[x]!='\0';x++)
		{
			if((name[x]=='a')||(name[x]=='e')  || (name[x]=='i')||(name[x]=='u'))
			{
				count=count + 1;
				printf("The lower vowel letters are %c", name[x]);
				printf("There are %d lower vowels",count);

			}
			else if (count >= 5)
			{
				if((name[x]=='A')||(name[x]=='E')  || (name[x]=='I')||(name[x]=='U'))
				{
					count2 = count2 + 1;
					printf("The upper vowel letters are %c", name[x]);
					printf("There are %d upper vowels",count2);	
				}
			}
		}
}
