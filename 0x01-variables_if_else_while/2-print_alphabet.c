#include <stdio.h>
#include <stdlib.h>

/**
 *main - reads out alphabet in small letters
 *
 *Description: prints small letters alphabet a-z
 *
 *return: Always (Success)
 */


int main(void)
{
	char A;

	for (A = 'a'; A <= 'z'; A++)
		putchar(A);
	putchar ('\n');
	return (0);



}
