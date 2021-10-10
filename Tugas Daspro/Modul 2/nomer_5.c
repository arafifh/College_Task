#include <stdio.h>
#include <string.h>

int main()
{
    int vowel_a = 0, vowel_i = 0, vowel_u = 0, vowel_e = 0, vowel_o = 0;
    char input[100];
    fgets(input, 100, stdin);                                                       //input string

    for (int i = 0; i < strlen(input); i++)                                         //loop for check vowels
    {
        //check how many vowels
        if (input[i] == 'A' || input[i] == 'a') vowel_a++;
        else if (input[i] == 'I' || input[i] == 'i') vowel_i++;
        else if (input[i] == 'U' || input[i] == 'u') vowel_u++;
        else if (input[i] == 'E' || input[i] == 'e') vowel_e++;
        else if (input[i] == 'O' || input[i] == 'o') vowel_o++;        
    }
    //final output
    printf("A/a : %d\n", vowel_a);
    printf("I/i : %d\n", vowel_i);
    printf("U/u : %d\n", vowel_u);
    printf("E/e : %d\n", vowel_e);
    printf("O/o : %d\n", vowel_o);    
    
    return 0;
}