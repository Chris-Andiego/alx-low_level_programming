#include "main.h"

/**
 * print_rev - function
 *
 * @s: string
 * Return: reverse of a string
 */

void print_rev(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	length--;

	while (length >= 0)
	{
		_putchar(*(s + length));
		length--;
	}
	_putchar('\n');
}
