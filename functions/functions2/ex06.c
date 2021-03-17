/*Write a function to check whether a number is in a given range*/

#include <stdio.h>

/* Say if a number is a specific range */
void in_range(int n1, int n2, int number);

int main()
{
    int start,end,number;

    printf("Insert the start number of the range (int): ");
    scanf("%i",&start);

    printf("Insert the last number of the range (int): ");
    scanf("%i",&end);

    printf("Insert a number (int): ");
    scanf("%i",&number);

    in_range(start,end,number);

    return 0;
}

void in_range(int n1, int n2, int number)
{   
    int key = 0;

    if (n1 < n2)
    {
        for (int i = n1; i < n2; i++)
        {
            if (i == number)
            {
                printf("%i is in the range\n",number);
                key++;
                break;
            }
        }
    }
    else
    {
        for (int i = n2; i < n1; i++)
        {
            if (i == number)
            {
                printf("%i is in the range\n",number);
                key++;
                break;
            }
        }
    }

    if (key == 0)
    {
        printf("%i is not in the range\n",number);
    }
}