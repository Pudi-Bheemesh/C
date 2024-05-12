#include <stdio.h>  
#include <math.h>

int convert(long long n);
int main()
{
    long long m;
    printf("Enter a binary number:");
    scanf("%lld", &m);
    printf("%lld in binary is equal to %d", m, convert(m));
    return 0;
}

int convert(long long n)
{
    int dec = 0, i = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2,i);
        ++i;
    }
    return dec;
}