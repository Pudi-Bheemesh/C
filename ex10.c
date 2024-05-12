#include <stdio.h>
#include <math.h>

int main()
{
    int i,n;
    float a[10],mean,sum,sd,var;
    float *p;

    printf("\nEnter the number of elements:");
    scanf("%d",&n);
    
    printf("\nEnter the elements: ");
    p = a;
    for (i = 0; i < n; i++)
    {
        scanf("%f",p);
        p++;
    }
    p = a;
    sum=mean=sd=var=0;
    for (i = 0; i < n; i++)
    {
        sum = sum +(*p);
        p++;
    }

    mean = sum/n;
    
    p = a;
    for (i = 0; i < n; i++)
    {
        var = var+ pow((*p-mean),2);
        p++;
    }
    var = var/n;

    sd = sqrt(var);

    printf("\n\nMean = %f,\nsum = %f,\nsd = %.5f,\nvar = %f",&mean,&sum,&sd,&var);
}