#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * @c: Carries ASCII value as arguement
 */
int _isalpha(int c)
{
	if (c >= 97 || c >= 65)
		return (1);
	else
		return (0);
	_putchar('\n');
}
