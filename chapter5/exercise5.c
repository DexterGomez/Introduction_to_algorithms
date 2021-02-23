/*Write a program that takes hours and minutes and
 * outputs the total numer of minutes
 */

#include <stdio.h>

int main(){
	int hours;
	int minutes;
	int total_minutes;

	printf("Introduce the number of hours: ");
	scanf("%d",&hours);

	printf("Introduce the number of minutes: ");
	scanf("%d",&minutes);

	total_minutes = (hours * 60) + minutes;

	printf("The total number of minutes is %d\n",total_minutes);

	return 0;
}
