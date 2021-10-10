#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    fgets(input, 100, stdin);                                       //input string

    for (int i = 0;i < strlen(input);i++)                           //loop for check elements in input[100]
    {
        if (input[i] == '_')                                        //check if there is '_' in string
        {
            for (int line = i;line < strlen(input);line++)          //int line start in '_'
            {
                input[line] = toupper(input[line + 1]);             //remove '_' and change to uppercase after '_'
            }
        }
        else if (input[i] >= 'A' && input[i] <= 'Z')                 //check if there is uppercase in string
        {
            input[i] = tolower(input[i]);                       //change uppercase to lowecase
        }
        
    }

    printf("%s", input);                                            //final output


    return 0;
}