#include <stdio.h>
#include "main.h"

/**
 * _strlen - function
 *
 * @s: character
 * Return: character
 */

int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;

	return (length);
}
