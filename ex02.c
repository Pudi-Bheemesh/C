#include <stdio.h>

int main()
{
    int num1, num2;
    float result;
    char op;

    printf("Enter two integers: ");
    scanf("%d%d",&num1,num2);

    printf("Enter the operator\n+ for addition\n- for subtraction\n* for multiplication\n");
    printf("/ for division\n%% for modulus\n");

    scanf(" %c",&op);

    if(op == '+')
    {
        result = num1 + num2;
    }
    else if(op == '-')
    {
        result = num1 - num2;
    }
    else if(op == '*')
    {
        result = num1 * num2;
    }
    else if(op == '/')
    {
        if (num2 == 0)
        {
            printf("Retry and enter a non zero number...\n");
            return (-1);
        }
        result = num1 / num2;
    }
    else if(op == '%')
    {
        if (num2 == 0)
        {
            printf("Retry and enter a non zero number...\n");
            return (-1);
        }
        result = num1 % num2;
    }
    else
    {
        printf("Invalid operator\n");
        return 1;
    }
    printf("Result = %f\n", result);
    return 0;
}