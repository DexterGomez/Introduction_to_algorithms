/*Write a program that converts kilometers per hour
 * to miles per hour
 */

#include <stdio.h>

int main(){
	float kmh;

	printf("Introduce the km/h: ");
	scanf("%f",&kmh);

	float mph = kmh * 0.6213712;

	printf("The km/h in mp/h are: %f\n",mph);

	return 0;
}
