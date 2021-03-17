/* Write a function that accepts a string and calculate the number of upper case letters and lower case letters.  */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void calculate_letters(char *string);

int main()
{   
    char string[40];

    printf("Insert a string: ");
    fflush(stdin);
    fgets(string,40,stdin);
    string[strlen(string)-1] = '\0';

    calculate_letters(string);

    return 0;
}

void calculate_letters(char *string)
{
    int uppercase = 0;
    int lowercase = 0;

    for (int i = 0; i < strlen(string); i++)
    {
        if (isupper(string[i]))
        {
            uppercase++;
        }
        else
        {
            lowercase++;
        }
    }
    printf("Upper case letters: %i\nLower case letters: %i\n",uppercase,lowercase);
}