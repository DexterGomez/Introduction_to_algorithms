/* Write a program that deliberately makes the following 
*mistakes:
* -prints a floating-point number using %d conversion
* -prints an integer using the %f conversion
* -prints a caracter using the %d conversion
*/

#include <stdio.h>

int main(){

    float a = 2.1;

    printf("%d\n", (int)a);

    int b = 4;

    printf("%f\n", (float)b);

    char c = 'c';

    printf("%d\n",c);

    return 0;
}