#include "main.h"

/**
 * leet - encodes a string
 * @str: tthe string to code
 *
 * Return: the encode string
 */
char *leet(char *str)
{
	int i, j;
	char c[] = "aAeEo0tTlL";
	char n[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (c[j] != '\0')
		{
			if (str[i] == c[j])
			{
				str[i] = n[j];
			}
				j++;
		}

		i++;
	}
	return (str);
}
