/* Write a program to reverse a string */

#include <stdio.h>
#include <string.h>

/*Print the reverse of a string */
void reverse(char const *string);

int main()
{
    char string[40];

    printf("Insert a string: ");
    fflush(stdin);
    fgets(string,40,stdin);
    string[strlen(string)-1] = '\0';

    reverse(string);

    return 0;
}

void reverse(char const *string)
{
    char reverse_string[strlen(string)];

    for (int i = strlen(string)-1, j = 0; i >= 0; i--, j++)
    {
        reverse_string[j] = string[i];
    }
    
    printf("%s\n",reverse_string);
}