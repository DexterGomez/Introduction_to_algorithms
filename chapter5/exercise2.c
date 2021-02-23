/*Write a program to calculate the volume
 * of a sphere
 */

#include <stdio.h>
#define PI 3.141592

int main(){
	float radious;

	printf("Insert the radious of the sphere: ");
	scanf("%f",&radious);

	float volume;

	volume = (4 * PI * (radious*radious*radious))/3;

	printf("The volume of the sphere is: %f\n",volume);

	return 0;
}
