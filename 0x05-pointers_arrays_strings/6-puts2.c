#include <stdio.h>
#include "main.h"

/**
 * puts2 - function
 *
 * @str: variable
 * Return: string
 */

void puts2(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
	{
		if (length % 2 == 0)
			_putchar(*(str + length));
		length++;
	}
	_putchar('\n');
}
