#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    srand(time(0));
    struct pl
    {
        char name[20];
        int score;
        float acc;
        int chance;
    };
    struct pl p[10];
    int i, j, n, ans, chance = 0, guess = 0, m;
    ans = (rand() % 99) + 1;
    printf("enter no of player:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter name of player[%d]:", i + 1);
        scanf("%s", p[i].name);
        for (j = 0; j < 10; j++)
        {
            printf("\nenter you GUESS:");
            scanf("%d", &guess);
            if (guess == ans)
            {
                p[i].chance = j + 1;
                break;
            }
            else if (guess > ans)
            {
                printf(">>>your guess is larger than actual value");
            }
            else
            {
                printf(">>>your guess is smaller than actual value");
            }
        }
        m = 10 - j;
        p[i].score = m * 10;
        p[i].acc = p[i].score;
    }

    printf("\tRESULT\n");
    printf("************************\n");
    printf("name\tchance\tscore\taccuracy");
    for (i = 0; i < n; i++)
    {
        printf("\n%s\t%d\t%d\t%f\n", p[i].name, p[i].chance, p[i].score, p[i].acc);
    }
    printf("*************************");
}