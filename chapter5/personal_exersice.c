/*Get a base number and her exponent and
 * made the calculation
 */

#include <stdio.h>

int main(){
	
	int base;
	int exponent;

	printf("Introduce an integer number: ");
	scanf("%d",&base);

	printf("Introduce an exponent: ");
	scanf("%d",&exponent);

	int auxiliar = base;

	for(int i = 1; i < exponent; i++ ){
		auxiliar = auxiliar*base;
	}

	printf("%d up to %d is %d\n",base,exponent,auxiliar);

	return 0;
}
