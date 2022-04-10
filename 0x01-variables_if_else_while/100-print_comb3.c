#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: 0 always success
 */

int main(void)
{
	int d;

	for (d = 1; d < 90; d++)
	{
		putchar(d / 10 + '0');
		putchar(d % 10 + '0');
		if (d != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
