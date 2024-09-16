#include <stdio.h>
int main()
{
    char opr;
    float num1, num2, sum, sub, mult, div;
    // inputs from user
    printf("enter the 1st no:");
    scanf("%f", &num1);
    printf("enter your opertaion:");
    scanf(" %c", &opr);
    printf("enter the 2nd no:");
    scanf("%f", &num2);
    // arithmetic operations

    // addition operation
    if (opr == '+')
    {
        sum = num1 + num2;
        printf("ANS>> %.2f + %.2f = %.2f", num1, num2, sum);
    }
    // substraction operation
    else if (opr == '-')
    {
        sub = num1 - num2;
        printf("ANS>> %.2f - %.2f = %.2f", num1, num2, sub);
    }
    else if (opr == '/')
    { // to avoid division by zero
        if (num2 == 0)
        {
            printf("division by zero is not possible");
        }
        // division operation
        else
        {
            div = num1 / num2;
            printf("ANS>> %.2f / %.2f = %.2f", num1, num2, div);
        }
    }
    // for multiplication operation
    else if (opr == '*')
    {
        mult = num1 * num2;
        printf("ANS>> %.2f X %.2f = %.2f", num1, num2, mult);
    }
    // for wrong selection
    else
    {
        printf("INVALID CHOICE");
    }
    return 0;
}