#include "main.h"

/**
 * print_rev - reverse a string
 * @s: is the string to be reversed
 * return: no return value
 */
void print_rev(char *s)
{
	int i, length;

	i = 0, length = 0;
	/* getting the length of the string */
	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	/* printing the string from descending order */
	_putchar('\n');
}
