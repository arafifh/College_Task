#include <stdio.h>

int main()
{
    int input;
    scanf("%d", &input);                        //input number

                           
    if (input % 2 == 0)
    {                   //even number
        printf("Genap\n");
    } else
    {            //odd number
        printf("Ganjil\n");
    }
    
    return 0;
}