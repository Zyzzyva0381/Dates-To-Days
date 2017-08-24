/*
program by Zyzzyva038
Calculate the day of a date. 
Released under the "CC BY-NC-ND 3.0" licence. 
*/

#include <stdio.h>
#include <stdlib.h>

char mon[] = "Monday";
char tue[] = "Tuesday";
char wed[] = "Wednesday";
char thu[] = "Thursday";
char fri[] = "Friday";
char sat[] = "Saturday";
char sun[] = "Sunday";

int Year;
int c;
int y;
int m;
int d;
int w;
int day;
//int days_num[7] = {1,2,3,4,5,6,0};

void main(){
	printf("This program will turn the date to the days of te week. Made by Zyzzyva038. \n");
	printf("Please input the year number. \n");
	scanf("%d",&Year);
	
	printf("Please input the month number. \n");
	scanf("%d",&m);
	if (m == 1){
		m = 13;
	}else if(m == 2){
		m = 14;
	}
	
	printf("please input the day number. \n");
	scanf("%d",&d);
	
	y = Year % 100;
	c = (Year - y) / 100;
	
	w = floor(c / 4) - (2 * c) + y + floor(y / 4) + floor(13 * (m + 1) / 5) + d - 1;
	day = w % 7;
	
	if (day == 1){
		printf("This is Monday. \n");
	}else if (day == 2){
		printf("This is Tuesday. \n");
	}else if (day == 3){
		printf("This is Wednesday. \n");
	}else if (day == 4){
		printf("This is Thursday. \n");
	}else if (day == 5){
		printf("This is Friday. \n");
	}else if (day == 6){
		printf("This is Saturday. \n");
	}else if (day == 0){
		printf("This is Sunday. \n");
	}
	
	printf("The program will terminate. ");
	system("pause");
}

