#include <stdio.h>
#include <string.h>
#include <math.h>

int square(int nilai)
{
    if (nilai == 0)
    {
        return 0;
    }      
    return (pow(nilai,2) + square(nilai-1));
}

int input;
int main()
{
    scanf("%d",&input);
    printf("%d",square(input));
}
