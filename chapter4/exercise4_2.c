/* Write a program to print a block E using
 * asterisks (*), where the E has a height
 * of seven characters and a width of five
 * charecters
 */

#include <stdio.h>

void long_line();
void short_line();

int main(){

	long_line();
	short_line();
	short_line();
	long_line();
	short_line();
	short_line();
	long_line();

	return 0;
}

void long_line(){
	printf("*****\n");
}

void short_line(){
	printf("*\n");
}
