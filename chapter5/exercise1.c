/*Write a program that converts Centrigrade to
 * Fahrenheit
 */

#include <stdio.h>

int main(){
	float value_c;

	printf("Insert centigrates: ");
	scanf("%f",&value_c);

	float value_f;

	value_f = ((9*value_c)/5) + 32;
	printf("The temperature in Fahrenheit is %f\n",value_f);

	return 0;
}
