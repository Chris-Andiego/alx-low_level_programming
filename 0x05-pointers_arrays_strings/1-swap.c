#include <stdio.h>
#include "main.h"

/**
 * swap_int -  function
 *
 * @a: value to swap
 * @b: value to swap
 * Return: int
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
