#include <stdio.h>

/**
 * main - Prints combination of numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	int A, i;

	for (A = '0'; A <= '9'; A++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (A < i)
			{
				putchar(A);
				putchar(i);

				if (A != '8' || (A == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
		}
		}
	}

	putchar('\n');

	return (0);
}
