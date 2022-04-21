#include <stdio.h>
#include "main.h"

/**
 *put_array - function
 *
 * @a: array
 * @n: variable
 * Return: array
 */

void put_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		
		if (i < n - 1)
			printf(", ");
	}

	printf("\n");
}
