#include <stdio.h>

int main()
{
    int i, j,a[20],n, temp;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-1-i; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("The sorted array is: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}