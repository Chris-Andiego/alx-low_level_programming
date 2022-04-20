#include "main.h"

/**
 * _puts - function
 *
 * @str: variable
 * Return: string
 */

void _puts(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
	{
		_putchar(*(str + length));
		length++;
	}
	_putchar('\n');
}
