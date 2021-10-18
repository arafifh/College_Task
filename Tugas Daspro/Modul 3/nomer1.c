#include <stdio.h>
#include <math.h>

int faktorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    return num * faktorial(num - 1);
}

int main()
{
    int bil, hasil;
    printf("Masukkan bilangan > ");
    scanf("%d", &bil);
    hasil = faktorial(bil);
    printf("Faktorialnya adalah %d", hasil);
}