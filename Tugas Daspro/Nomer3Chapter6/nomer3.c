#include <stdio.h>
#include <string.h>
#include <math.h>
#define PHI 3.14

int main()
{
    int input, A, B, C, D, E, F;                                        //variable for input choice
    printf("Choose area of the shape that you want to solve : \n");     
    printf("(1) Area of parallelogram\n");
    printf("(2) Area of triangle\n");
    printf("(3) Area of trapezoid\n");
    printf("(4) Area of circle\n");
    printf("(5) QUIT\n");
    scanf("%d", &input);                                                //input your choice

    double P, L, T, r, result;                                          //variable for operation
    
    if (input == 1)                                                     //parallelogram
    {
        printf("base > ");
        scanf("%lf", &P);
        printf("height > ");
        scanf("%lf", &T);

        result = P * T;
        printf("The size of parallelogram is %.2lf", result);
    }
    else if (input == 2)                                                //triangle
    {
        printf("base > ");
        scanf("%lf", &P);
        printf("height > ");
        scanf("%lf", &T);

        result = P * T / 2;
        printf("The size of triangle is %.2lf", result);
    }
    else if (input == 3)                                                //trapezoid
    {
        printf("base 1 > ");
        scanf("%lf", &P);
        printf("base 2 > ");
        scanf("%lf", &L);
        printf("height > ");
        scanf("%lf", &T);

        result = (P + L) / 2 * T;
        printf("The size of trapezoid is %.2lf", result);
    }
    else if (input == 4)                                                //circle
    {
        printf("radius > ");
        scanf("%lf", &r);

        result = PHI * pow(r,2);
        printf("The size of circle is %.2lf", result);
    }
    else if (input == 5)                                                //QUIT
    {
        printf("Thank you for using the program:)");
    }
    else                                                                //other choice
    {
        printf("Invalid");
    }



    return 0;
}