#include <stdio.h>
int main(){
int year;
printf("Plesse enter the year");
scanf("%d, &year");
if (((year%4==0)&&(year%100!=0))||(year%400==0))
printf("This is a leap year",year);
else
printf("This is not a leap year",year);
	
	return 0;
}
