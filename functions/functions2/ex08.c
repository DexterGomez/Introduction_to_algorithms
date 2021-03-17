/* Write a function that takes a list and returns a new list with unique elements of the first list. */

#include <stdio.h>
#include <string.h>

int find_element(int *list,int num, int elements);

void print_list(int *list, int elements);

void is_in_list(int *nlist, int elements);

int main()
{   
/*
---------------------------------
INSERT THE LIST OF NUMBERS HERE
---------------------------------
*/
    int number_list[] = {2,3,4,4,4,5,5,6,9};

    int elements = sizeof(number_list)/sizeof(int);

    is_in_list(number_list, elements);

    return 0;
}

int find_element(int *list,int num, int elements)
{
    int yes_no = 0;

    for (int i = 0; i < elements; i++)
    {
        if (list[i] == num)
        {
            yes_no++;
        }
    }
    return yes_no;
}

void print_list(int *list, int elements)
{
    for (int i = 0; i < elements; i++)
    {
        printf("%i",list[i]);
    }
    printf("\n");
}

void is_in_list(int *nlist, int elements)
{
    int new_list[elements];
    int leng_newlist = 1;

    new_list[0] = nlist[0];

    for (int i = 1; i < elements; i++)
    {
        for (int k = 0; k < elements; k++)
        {
            int condicional = find_element(new_list,nlist[k],elements);

            if (condicional == 0)
            {
                new_list[i] = nlist[k];
                leng_newlist++;
                break;
            }
        }
    }
    print_list(new_list,leng_newlist);
}