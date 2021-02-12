/*Write a program to compute the area
 * and perimeter of a rectanguele */

#include <stdio.h>

int main(){
	
	int width_1 = 3;
	int height_1 = 5;

	float width_2 = 6.8;
	float height_2 = 2.3;
	
	printf("------------rectangule 1-----------\n");

	printf("The perimeter of the first rectangule is: %i\n", (2*width_1 + 2*height_1));
	printf("The area of the first rectangule is: %i\n", (width_1 * height_1));

	printf("------------rectangule 2-----------\n");

	printf("The perimeter of the second rectangule is: %f\n", (2*width_2 + 2* height_2));
	printf("The area of the second rectangule is: %f\n", (width_2 * height_2));

	return 0;
}
