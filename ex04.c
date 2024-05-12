#include <stdio.h>
#include <math.h>
#define  PI  3.142857

int main()
{
    float x, degree, nume, deno, sum, term;
    int i;

    printf("Enter degree:");
    scanf("%f",&degree);

    x = degree *(PI/180.0);
    sum = 0;
    nume = x;
    deno = 1.0;
    i = 1;

    do
    {
        term = nume/deno;
        sum =sum + term;
        i = i+2;

        nume = -nume * x * x;
        deno = deno * i *(i-1);
        printf("Term = %f\n", term);
    }
    while (fabs(term) >= 0.00001);

    printf("Computed value of sin(%.2f) = %f\n", degree, sum);
    printf("value from library function is sin(%.2f) = %f\n", degree, sin(x));

    return 0;
}