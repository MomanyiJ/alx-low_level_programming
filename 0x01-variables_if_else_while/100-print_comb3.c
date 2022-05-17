#include <stdio.h>

/**
 * main - Prints combination of numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
int i;
	int j = 0;

	/* Outer loop (Determines the number the first index is holding) */
	for (i = 48; i <= 57; i++)
	{
		/* Inner loop (Determines the starting point of the 2nd number) */
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			/* Checking the last digit not to print a comma */
			if (i != 56 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

