#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: 0 is success
 */

int main(void)
{
	int n;
	char low;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
