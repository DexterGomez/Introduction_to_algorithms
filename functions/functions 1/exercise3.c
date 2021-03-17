/* create a function that returns 0 if both strings have the same elements, and when there's a different element. returns the first different char... an example: "var1X" and "var1Y", returns "X" */

#include <stdio.h>
#include <string.h>

/*Return 0 if both have same elements else return the first different char*/
char different_element(char const *string1, char const *string2);

int main()
{
    char string1[40];
    char string2[40];

    printf("Insert a string: ");
    fflush(stdin);
    fgets(string1,40,stdin);
    string1[strlen(string1) - 1] = '\0';

    printf("Insert another string: ");
    fflush(stdin);
    fgets(string2,40,stdin);
    string2[strlen(string2) - 1] = '\0';

    printf("\n%c\n\n",different_element(string1,string2));

    return 0;
}

char different_element(char const *string1, char const *string2)
{
    if(strncasecmp(string1,string2,40) == 0)
    {
        return '0';
    }
    else
    {
        for(int i = 0; i <= 40; i++)
        {
            if( string1[i] != string2[i] )
            {
                return string1[i];
                break;
            }
        }
    }
}