#Include "main"

/**
 * _isalpha - check main
 * @c: an input character
 * Description: returns 1 if character is letter, lower or uppercase
 * Return: 1 or 0
 */

int -isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}	
