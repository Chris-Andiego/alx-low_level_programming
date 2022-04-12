#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - check description
 * Description: prints alphabets in lowercase
 * Return: Nothing
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		_putchar(n);
	_putchar('\n');
}
