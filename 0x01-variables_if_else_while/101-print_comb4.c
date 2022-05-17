#include <stdio.h>

/**
 * main - Prints combination of 3 numbers
 * 
 * Return: Always (Success)
 */
int main(void)
{
int i;
	int j;
	int k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (j != i && j != k && i != k && j < i && i < k)
				{
					putchar(j);
					putchar(i);
					putchar(k);
					if (i == 56 && j == 55 && k == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);





}

