/* create a function that returns 0 if both have the same length and 1 if is different. */

#include <stdio.h>
#include <string.h>

/* Return 0 if both strings have same lenght else 1 */
int same_length(char const *string1, char const *string2);

int main()
{
    char string1[40];
    char string2[40];

    printf("Insert a string: ");
    fflush(stdin);
    fgets(string1, 40, stdin);
    string1[strlen(string1) - 1] = '\0';

    printf("Insert another string: ");
    fflush(stdin);
    fgets(string2, 40, stdin);
    string2[strlen(string2) - 1] = '\0';

    printf("\n%i\n", same_length(string1, string2));

    return 0;
}

int same_length(char const *string1, char const *string2)
{
    if(strlen(string1) == strlen(string2))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}