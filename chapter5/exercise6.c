/*Write a program that takes an integer as the number
 * of minutes, and outputs the total hours and minutes
 */

#include <stdio.h>

int main(){
	int total_minutes;

	printf("Introduce the number of minutes: ");
	scanf("%d",&total_minutes);

	int hours = total_minutes / 60;
	int minutes = total_minutes % 60;

	printf("%d are equivalent to %d hour and %d minutes\n",total_minutes,hours,minutes);
	return 0;
}
