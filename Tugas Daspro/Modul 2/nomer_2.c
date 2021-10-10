#include <stdio.h>

int main()
{
    int input;
    printf("Masukkan bilangan > ");
    scanf("%d", &input);                    //input number

    for (int i = 1;i <= input;i++)
    {
        if (i % 2 == 0)
        {                   //even number 
            printf(" * ");
        }
        else
        {            //odd number
            printf("%d", i);
        } 
    }


    return 0;
}