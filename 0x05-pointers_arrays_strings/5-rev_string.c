#include "main.h"

/**
 * rev_string - reverses a string
 * @s: is the reversing string
 * return: no return value
 */
void rev_string(char *s)
{
	int i = 0, length = 0, swap;

	/* getting the length of the strings */
	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	/*swapping strings */
	for (i = 0; i < length / 2; i++)
	{
		swap = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = swap;
	}
	/* printing the string */
}
