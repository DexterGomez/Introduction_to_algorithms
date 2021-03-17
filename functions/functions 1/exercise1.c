/* create a function that receives a string and print the inverted string, remember that to print an element i you can use printf("%c",string[i]); */

#include <stdio.h>
#include <string.h>

/*Print the inverted stirng */
void inverted_string(char const *string);

int main()
{  
    char word[40];

    printf("Insert a string: ");
    fflush(stdin);
    fgets(word, 40, stdin);
    
    word[strlen(word)-1] = '\0';

    inverted_string(word);

    return 0;
}

void inverted_string(char const *string)
{
    for(int i = strlen(string); i >= 0 ; i--)
    {
        printf("%c",string[i]);
    }
    printf("\n");
}