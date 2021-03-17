/* Write a function that takes a number as a parameter and check the number is prime or not */

#include <stdio.h>

void is_prime(int n);

int main()
{
    int number;

    printf("Insert a number: ");
    scanf("%i",&number);

    is_prime(number);

    return 0;
}

void is_prime(int n)
{
    int prime = 0;

    for(int i = 2, key = 0; i < n && key == 0; i++)
    {
        if ( (n%i) == 0 )
        {
            prime = 1;
        }
    }
    if (prime == 1)
    {
        printf("%i is not prime\n",n);
    }
    else
    {
        printf("%i is prime\n",n);
    }
}