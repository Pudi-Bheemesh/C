#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, r1, r2, r, rp, ip;
    printf("\nEnter three coefficients: ");
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0)
    {
        printf("\nError! Linear equation!");
        return 1;
    }
    d = b*b-4*a*c;
    if(d>0)
    {
        printf("\nThe roots are real and distinct");
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("\nIn R1 = %.3f\n   R2 = %.3f",r1,r2); 
    }
    else if (d == 0)
    {
        printf("\nThe roots are real and equal");
        r = -b/(2*a);
        printf("\nR = %.3f",r);
    }
    else if (d<0)
    {
        printf("\nThe roots are imaginary!");
        rp = -b/(2*a);
        ip =sqrt(-d)/(2*a);
        printf("\nR1 = %.3f+%.3fi",rp,ip);
    }
    return 0;
}