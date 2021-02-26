/*
A leap year is any year divisible by 4, unless the year is divisible by
100, but not 400. Write a program to tell if a year is a leap year.
*/

#include <stdio.h>

int main(){

	int year;
	
	printf("Introduce a year: ");
	scanf("%d",&year);
	
	if(year%4 == 0 || ( year%100 == 0 && year%400 != 0 )){
		printf("The year %d is leap\n",year);
	}
	else{
		printf("The year %d is not leap\n",year);
	}
	
	return 0;
}
