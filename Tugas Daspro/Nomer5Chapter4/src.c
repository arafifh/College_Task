#include <stdio.h>

int main()
{
    double data_usage;
    printf("Input your data usage > ");
    scanf("%lf", &data_usage);

    if(0.0 < data_usage && data_usage <= 1.0) {
        printf("Your charge is $250\n");
    } else if(1.0 < data_usage && data_usage <= 2.0) {
        printf("Your charge is $500\n");
    } else if(2.0 < data_usage && data_usage <= 5.0) {
        printf("Your charge is $1000\n");
    } else if(5.0 < data_usage && data_usage <= 10.0) {
        printf("Your charge is $1500");
    } else if(data_usage > 10.0) {
        printf("Your charge is $2000\n");
    }


    return 0;
}