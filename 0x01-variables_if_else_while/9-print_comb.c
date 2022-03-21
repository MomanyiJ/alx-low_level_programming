#include <stdio.h>

/**
 * main - Prints a serie of numbers with commas
 *
 * Return: Always (Success);
 */

int main(void)
{
	int A;

	for (A = '0'; A <= '9'; A++)
	{
		putchar(A);

		if (A != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
