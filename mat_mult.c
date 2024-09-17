#include <stdio.h>
void main()
{
	int r1, r2, c1, c2, i, j, k, sum = 0, a[10][10], b[10][10], c[10][10];
	printf("1st matrix\n");
	printf("enter number of rows:");
	scanf("%d", &r1);
	printf("enter the number of columns:");
	scanf("%d", &c1);
	printf("values:\n");
	for (i = 0; i < r1; i++)
	{
		for (j = 0; j < c1; j++)
		{
			printf("eneter the value a%d%d=", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	// print matrix one
	printf("MATRIX 1");
	for (i = 0; i < r1; i++)
	{
		printf("\n");
		for (j = 0; j < c1; j++)
		{
			printf("%d\t", a[i][j]);
		}
	}
	printf("\n");
	printf("\n2nd matrix\n");
	printf("enter number of rows:");
	scanf("%d", &r2);
	printf("enter number of columns:");
	scanf("%d", &c2);
	if (c1 != r2)
	{
		printf("ACTION CANNOT BE PERFORMED!!!!");
	}
	else
	{
		printf("values:\n");
		for (i = 0; i < r2; i++)
		{
			for (j = 0; j < c2; j++)
			{
				printf("enter the value b%d%d=", i, j);
				scanf("%d", &b[i][j]);
			}
		}
		// print matrix 2
		printf("\nMATRIX 2:\n");
		for (i = 0; i < r2; i++)
		{
			printf("\n");
			for (j = 0; j < c2; j++)
			{
				printf("%d\t", b[i][j]);
			}
		}

		// multiplication
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c2; j++)
			{
				for (k = 0; k < r2; k++)
				{
					sum = sum + a[i][k] * b[k][j];
				}
				c[i][j] = sum;
				sum = 0;
			}
		}
		printf("\n");
		// print resultant matrix
		printf("\nRESULTANT MATRIX:\n");
		for (i = 0; i < r1; i++)
		{
			printf("\n");
			for (j = 0; j < c2; j++)
			{
				printf("%d\t", c[i][j]);
			}
		}
	}
}
