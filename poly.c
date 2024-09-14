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

    printf("your polynomial expression is:\n");
    for (i = 0; i < n1; i++)
    {
        printf("%d(X^%d)", polyn1[i].coefficient, polyn1[i].exponential);
        if (i != n1 - 1)
        {
            printf("+");
        }
    }
}
