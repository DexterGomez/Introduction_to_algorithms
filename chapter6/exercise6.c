/*
Write a program that, given the number of hours an employee
worked and the hourly wage, computes the employee's weekly pay. Count any
hours over 40 as overtime at time and a half.
*/
#include <stdio.h>

int main(){
	float hours, salarie, total;

	printf("Introduce the number of hours: ");
	scanf("%f",&hours);
	
	printf("Introduce the salarie per hour: ");
	scanf("%f",&salarie);
	
	if(hours <= 40){
		total = hours * salarie;
	}
	else{
		float salarie_extra;
		printf("Introdcue the salarie per extra hour: ");
		scanf("%f",&salarie_extra);
		total = (40 * salarie) + ((hours-40) * salarie_extra);
	}
	
	printf("The salary is $%.2f\n",total);
	
	return 0;
}
