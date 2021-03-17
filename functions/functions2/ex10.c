/* Write a program to print the even numbers from a given list.*/

#include <stdio.h>

void print_list(int *list, int elements);

void even_numbers(int *list, int elements);

int main()
{
/*
---------------------------------
INSERT THE LIST OF NUMBERS HERE
---------------------------------
*/
    int numbers[] = {1,4,3,4,5,6,7,8,9};
    int elements = sizeof(numbers)/sizeof(int);

    even_numbers(numbers,elements);

    return 0;
}

void print_list(int *list, int elements)
{
    for (int i = 0; i < elements; i++)
    {
        printf("%i",list[i]);
    }
    printf("\n");
}

void even_numbers(int *list, int elements)
{
    int new_list[elements];
    int lengh_newlist = 0;

    int k = 0;
    for (int i = 0; i < elements; i++)
    {
        while (k < elements)
        { 
            if ( (list[k]%2) == 0)
            {
                new_list[i] = list[k];
                lengh_newlist++;
                k++;
                break;
            }
            else
            {
                k++;
            }
        }
    }
    print_list(new_list,lengh_newlist);
}