#include <stdio.h>

/**
 * main - Prints hexadecimal string
 *
 * Return: Always (Success)
 */
int main(void)
{
	char A;

	for (A = '0'; A <= '9'; A++)
	{
		putchar(A);
	}

	for (A = 'a'; A <= 'f'; A++)
	{
		putchar(A);
	}

	putchar('\n');

	return (0);
}
