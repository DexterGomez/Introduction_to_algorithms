/* Write a function to multiply all the numbers in a list. */

#include <stdio.h>

/* Multiply the elements of a list*/
int multiply(int *list, int elements);

int main()
{
/*---------------------------------------------------
Put the numbers you want to multiply inside the {}
---------------------------------------------------*/
    int list[] = {3,4,1,3};
   
    printf("Multilpliaction is is: %i\n",multiply(list,sizeof(list)/4));

    return 0;
}

int multiply(int *list, int elements)
{
    int result = list[0];

    for (int i = 1; i < elements; i++)
    {
        result = result * list[i];
    }
    return result;
}