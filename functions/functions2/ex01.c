/* Write a function to find the Max of three numbers */

#include <stdio.h>

/*Return the max number*/
int max(int num1, int num2, int num3);

int main()
{   
    int number1, number2, number3;

    printf("Introduce the first number: ");
    scanf("%i",&number1);

    printf("Introduce the second number: ");
    scanf("%i",&number2);

    printf("Introduce the third number: ");
    scanf("%i",&number3);

    printf("The max numeber is %i\n",max(number1,number2,number3));

    return 0;   
}

int max(int num1, int num2, int num3)
{
    if (num1 > num2 && num2 > num3) return num1;
    if (num1 > num3 && num3 > num2) return num1;
    if (num2 > num1 && num2 > num3) return num2;
    if (num2 > num3 && num3 > num2) return num2;
    if (num3 > num1 && num1 > num2) return num3;
    if (num3 > num2 && num2 > num1) return num3;
}