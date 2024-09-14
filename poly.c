/**
 * This program allows the user to input a polynomial expression term by term,
 * and then prints out the polynomial expression in a human-readable format.
 *
 * Example usage:
 * Enter the number of terms in the polynomial: 3
 * Enter the exponential of term 1: 2
 * Enter the coefficient of term 1: 3
 * Enter the exponential of term 2: 1
 * Enter the coefficient of term 2: 2
 * Enter the exponential of term 3: 0
 * Enter the coefficient of term 3: 1
 * Your polynomial expression is:
 * 3(X^2)+2(X^1)+1(X^0)
 */
#include <stdio.h>
#define MAX 10
int main()
{
    struct poly
    {
        int coefficient, exponential;
    };
    struct poly polyn1[MAX];
    int n1, i;
    printf("enter the no of terms in the polynomial:");
    scanf("%d", &n1);
    for (i = 0; i < n1; i++)
    {
        printf("enter the exponential of term %d:", i + 1);
        scanf("%d", &polyn1[i].exponential);
        printf("enter the coefficient of term %d:", i + 1);
        scanf("%d", &polyn1[i].coefficient);
    }
    // printing the polynomial expression
    printf("your polynomial expression is:\n");
    for (i = 0; i < n1; i++)
    {
        printf("%d(X^%d)", polyn1[i].coefficient, polyn1[i].exponential);
        if (i != n1 - 1)
        {
            printf("+");
        }
    }
    return 0;
}
