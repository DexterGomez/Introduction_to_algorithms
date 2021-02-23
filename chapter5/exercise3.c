/*Write a program that prints the perimeter
 * of a rectangle
 */

#include <stdio.h>

int main(){
	float height;
	float width;

	printf("Introduce the height: ");
	scanf("%f",&height);

	printf("Introduce the width: ");
	scanf("%f",&width);

	float perimeter = 2 * (width + height);

	printf("The perimeter of the rectangle is %f\n",perimeter);

	return 0;
}
