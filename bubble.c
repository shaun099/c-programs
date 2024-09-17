#include <stdio.h>
void main()
{
    int i, j, a[10], n, temp;
    printf("enter size of array:\n");

    scanf("%d", &n);

    printf("enter the elements of array:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nunsorted array:");

    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j + 1];

                a[j + 1] = a[j];

                a[j] = temp;
            }
        }
    }

    printf("\n\nsorted array:");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
