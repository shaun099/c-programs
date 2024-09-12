#include <stdio.h>
void main()
{
	int i, num[100], n, search, flag = 0, d;
	printf("enter the number of elements:"); // to enter the elements in array.
	scanf("%d", &n);
	printf("enter the values:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	printf("enter the value to be searched :"); // the value that we want to search
	scanf("%d", &search);
	for (i = 0; i < n; i++)
	{
		// searching operation
		if (search == num[i])
		{
			flag = 1;
			d = i + 1;
			break;
			// when search is found program breaks
		}
	}
	// printing the output
	if (flag == 1)
	{
		printf("%d is present at position:%d in the list", search, d);
	}
	else
	{
		printf("%d is not present in the list", search);
	}
}