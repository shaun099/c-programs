#include <stdio.h>

// Function to perform matrix multiplication
void main()
{
	int r1, r2, c1, c2, i, j, k, sum = 0;
	int a[10][10], b[10][10], c[10][10]; // Declare 3 2D arrays to store matrices

	// Input for 1st matrix
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
			printf("enter the value a%d%d=", i, j);
			scanf("%d", &a[i][j]); // Store values in matrix a
		}
	}

	// Print matrix 1
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
	printf("\n");

	// Input for 2nd matrix
	printf("2nd matrix\n");
	printf("enter number of rows:");
	scanf("%d", &r2);
	printf("enter number of columns:");
	scanf("%d", &c2);

	// Check if matrix multiplication is possible
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
				scanf("%d", &b[i][j]); // Store values in matrix b
			}
		}

		// Print matrix 2
		printf("\nMATRIX 2:\n");
		for (i = 0; i < r2; i++)
		{
			printf("\n");
			for (j = 0; j < c2; j++)
			{
				printf("%d\t", b[i][j]);
			}
		}

		// Perform matrix multiplication
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c2; j++)
			{
				sum = 0; // Reset sum for each element
				for (k = 0; k < r2; k++)
				{
					sum = sum + a[i][k] * b[k][j]; // Calculate dot product
				}
				c[i][j] = sum; // Store result in matrix c
			}
		}

		// Print resultant matrix
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