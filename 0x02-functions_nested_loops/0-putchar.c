#include <main.h>

/**
 *_putchar - the character to print
 *
 *Return: is successful returns 1
 */

int _putchar (char c)
{
	return (write (1, &c, 1));
}
