/* Write a function that checks whether a passed string is palindrome or not */

#include <stdio.h>
#include <string.h>

/*say if string is palindromic*/
void is_palindromic(char const *string);

int main()
{
    char string[40];

    printf("Insert a string: ");
    fflush(stdin);
    fgets(string,40,stdin);
    string[strlen(string) - 1] = '\0';

    is_palindromic(string);

    return 0;
}

void is_palindromic(char const *string)
{   
    int key = 0;
    int start_p = 0;
    int end_p = strlen(string) - 1;

    while (string[start_p] == string[end_p])
    {
        if(start_p == end_p) 
        {
            printf("Is palindromic\n");
            key = 1;
            break;
        }
    
        start_p++;
        end_p--;
    }
    if(key == 0) printf("Is not palindromic\n");
}