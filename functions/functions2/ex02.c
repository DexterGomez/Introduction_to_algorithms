/* Write a function to sum all the numbers in a list */

#include <stdio.h>

/* Sum the elements of a list */
int sum(int *list, int elements);

int main()
{
/*--------------------------------------------------
Put the numbers you want to sum inside the {}
-----------------------------------------------------*/
    int list[] = {11,12,13,14,15,16,17,18,19};

    printf("Sum is: %i\n",sum(list, sizeof(list)/4));

    return 0;
}

int sum(int *list, int elements)
{
    int result = 0;
    
    for (int i = 0; i < elements; i++)
    {
        result = result + list[i];
    }
    return result;
}