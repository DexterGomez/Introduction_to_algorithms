/* create a function where you enter a string of 30 chars and print only the consonants */

#include <stdio.h>
#include <string.h>

/* print the consonants of a string */
char *consonants(char *string);

int main()
{
    char string[30];

    printf("Insert a string (30 charts max): ");
    fflush(stdin);
    fgets(string,30,stdin);
    string[strlen(string) - 1] = '\0';

    printf("%s\n",consonants(string));

    return 0;
}

char *consonants(char *string)
{
    char *vocals = "aeiou";

    for(int i = 0; i < strlen(string); i++)
    {
        for(int j = 0; j < strlen(vocals); j++)
        {
            if (string[i] == vocals[j])
            {
                string[i] = '_';
            }
            
        }
    }

    return string;
}