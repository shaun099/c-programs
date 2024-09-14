/**
 * Checks if a given integer is an Armstrong number or not.
 *
 * An Armstrong number is a number that is equal to the sum of cubes of its digits.
 *
 * Example: 371 is an Armstrong number since 3^3 + 7^3 + 1^3 = 371
 *
 * return 0 if the program executes successfully, 1 if invalid input is provided
 */
#include <stdio.h>
int main()
{
	int num, rem, str = 0, og;
	printf("enter the number to be checked:");
	if (scanf("%d", &num) != 1)
	{
		printf("INVALID INPUT\n");
		return 1;
	}
	if (num < 0)
	{
		printf("please enter a non-negative value\n");
		return 1;
	}
	og = num;
	while (num != 0)
	{
		rem = num % 10;
		str += rem * rem * rem;
		num /= 10;
	}
	if (og == str)
	{
		printf("%d is armstrong", og);
	}
	else
	{
		printf("%d is not armstrong", og);
	}
	return 0;
}