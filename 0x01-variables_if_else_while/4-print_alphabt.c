#include <stdio.h>

/**
 * main - prints3 combination of numbers
 *
 * Return:Always (Success)
 */
int main(void)
{
	int c , i , k;

	for(c = '0'; c <= '9'; c++)
	{
	for(i = '0'; i <= '9'; i++)
	{
	for(k = '0'; k <= '9'; k++)
	if(c < i&& 1 < k)
	{
	putchar(c);
	putchar(i);
	putchar(k);
	if(c != '7')
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