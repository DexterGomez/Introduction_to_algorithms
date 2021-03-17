/* create a function where you insert a string and return 1 if is palindromic or not, it means that returns 1 if is palindrome ("ala"), return 0 if is not ("hello") */

#include <stdio.h>
#include <string.h>

/*return 1 if string[] is palindrome*/
int palindromic(char const *string);

int main()
{
    char string[40];

    printf("Insert a string: ");
    fflush(stdin);
    fgets(string,40,stdin);
    string[strlen(string) - 1] = '\0';

    printf("\n%i\n",palindromic(string));

    return 0;
}

int palindromic(char const *string)
{   
    int key = 0;
    int start_p = 0;
    int end_p = strlen(string) - 1;

    while (string[start_p] == string[end_p])
    {
        if(start_p == end_p) 
        {
            return 1;
            key = 1;
            break;
        }
    
        start_p++;
        end_p--;
    }
    if(key == 0) return 0;
}