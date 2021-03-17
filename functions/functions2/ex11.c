/*Write a function to check whether a number is perfect or not.*/
#include <stdio.h>

/* say if a  number is perfect */
void is_perfect(int num);

int main()
{
    int number = 0;
    printf("Introduce a number (int): ");
    scanf("%i",&number);

    is_perfect(number);

    return 0;
}

void is_perfect(int num)
{
    int sum = 0;

    for (int i = 1; i < num; i++)
    {
        if ( (num%i) == 0)
        {
            sum = sum + i;
        }
    }
    
    if (sum == num)
    {
        printf("%i is perfect\n",num);
    }
    else
    {
        printf("%i is not perfect\n",num);
    }
}