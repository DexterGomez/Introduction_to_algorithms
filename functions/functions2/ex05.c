/* Write a function to calculate the factorial of a number (a non-negative integer). The function accepts the number as an argument */

#include <stdio.h>

/* Return the factorial of "num" */
int factorial(int num);

int main()
{
    int number;
    printf("Insert a number: ");
    scanf("%i",&number);

    printf("The factorial of %i is %i\n",number,factorial(number));

    return 0;
}

int factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial( num-1);
    }
}