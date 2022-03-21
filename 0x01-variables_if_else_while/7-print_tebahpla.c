#include <stdio.h>

/**
 * main - Prints alphabet in reverse
 *
 * Return: Always (Success)
 */

int main(void)
{
	char A;

	for (A = 'z'; A >= 'a'; A--)

	{
		putchar(A);
	}

	putchar('\n');

	return (0);

}
