#include <stdio.h>
#include <string.h>
#include <math.h>

void hasil(int input[],int jumlah)
{
    int Max = input[0];
    int Min = input[0];

    for (int i = 1;i < jumlah;i++)
    {
        if (input[i] > Max)
        {
            Max = input[i];
        }
        if (input[i] < Min)
        {
            Min = input[i];
        }
    }
    printf("max: %d\n", Max);
    printf("min: %d\n", Min);
}

int main()
{
    int jumlah;
    scanf("%d", &jumlah);
    int a[jumlah], i=0;
    for(i = 0;i < jumlah;i++)
    {
        scanf("%d",&a[i]);
    }
    hasil(a, jumlah);

    return 0;
}
