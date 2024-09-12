#include <stdio.h>
void main()
{
	int i, num[100], n, search, flag = 0, d;
	printf("enter the number of elements:");
	scanf("%d", &n);
	printf("enter the values:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	printf("enter the value to be searched :");
	scanf("%d", &search);
	for (i = 0; i < n; i++)
	{
		if (search == num[i])
		{
			flag = 1;
			d = i + 1;
			break;
		}
	}
	if (flag == 1)
	{
		printf("%d is present at position:%d in the list", search, d);
	}
	else
	{
		printf("%d is not present in the list", search);
	}
}