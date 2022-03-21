#include "main.h"

/**
 * print_sign - Checks the sign of a number
 *
 * Return: 1 and prints + if n is greater than zero
 * returns - 0 and prints 0 is n is zero
 * Returns - 1 and prints - if n is less than zero
 * @n: Holds the character
 */
int print_sign(int n)
{
	if (n > 48)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
