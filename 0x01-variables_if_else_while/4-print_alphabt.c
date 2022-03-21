#include <stdio.h>

/**
 * main - Prints some letters of the alphabet
 *
 * Return: Always (Success)
 */

int main(void)
{
	char A;

	for (A = 'a'; A <= 'z'; A++)
	{
		if (A != 'e' && A != 'q')
		{
			putchar(A);
		}

	}

	putchar('\n');

	return (0);

}

