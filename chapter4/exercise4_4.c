/*Write a program to print "hello" in big block letters
 * each letter should have a height of 7 and width of 5
 */

#include <stdio.h>

void h();
void e();
void l();
void o();

int main(){
	h();
	printf("\n");
	e();
	printf("\n");
	l();
	printf("\n");
	l();
	printf("\n");
	o();
}

void h(){
	printf("*   *\n");
	printf("*   *\n");
	printf("*   *\n");
	printf("*****\n");
	printf("*   *\n");
	printf("*   *\n");
	printf("*   *\n");
}

void e(){
	printf("*****\n");
	printf("*    \n");
	printf("*    \n");
	printf("*****\n");
	printf("*    \n");
	printf("*    \n");
	printf("*****\n");
}

void l(){
	printf("*    \n");
	printf("*    \n");
	printf("*    \n");
	printf("*    \n");
	printf("*    \n");
	printf("*    \n");
	printf("*****\n");
}

void o(){
	printf("*****\n");
	printf("*   *\n");
	printf("*   *\n");
	printf("*   *\n");
	printf("*   *\n");
	printf("*   *\n");
	printf("*****\n");
}