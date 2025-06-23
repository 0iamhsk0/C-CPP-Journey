//write a program to print your timetable take input take 6 enteries

#include <stdio.h>
#include <conio.h>
main(){
	char c1,c2,c3,c4,c5,c6,faculty;
	int grp,roomNO;
	
	printf("TIME TABLE FOR MONDAY\n\n");
	printf("Enter your class, faculty, grp, room.no for 9-10: ");
	scanf("%s%s%d%d\n",&c1,&faculty,&grp,&roomNO);
	printf("Enter your class, faculty, grp, room.no for 10-11: ");
	scanf("%s%s%d%d\n",&c2,&faculty,&grp,&roomNO);
	printf("11-12: BREAK 1 \n");
	printf("Enter your class, faculty, grp, room.no for 12-1: ");
	scanf("%s%s%d%d\n",&c3,&faculty,&grp,&roomNO);
	printf("1-2: LUNCH BREAK \n");
	printf("Enter your class, faculty, grp, room.no for 2-3: ");
	scanf("%s%s%d%d\n",&c4,&faculty,&grp,&roomNO);
	printf("Enter your class, faculty, grp, room.no for 3-4: ");
	scanf("%s%s%d%d\n",&c5,&faculty,&grp,&roomNO);
	printf("Enter your class, faculty, grp, room.no for 4-5: ");
	scanf("%s%s%d%d\n",&c6,&faculty,&grp,&roomNO);
}
			
