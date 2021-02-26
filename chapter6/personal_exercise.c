/*
Change tons to punds
*/

#include <stdio.h>

int main(){

	float tons;
	
	printf("Introduce the mass in tons: ");
	scanf("%f",&tons);
	
	float lb = tons*2204.62;
	
	printf("The result is %.2f lb\n",lb);
	
	return 0;
}
