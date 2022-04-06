#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	argc--;
	printf("%d\n", argc);
	return (0);
}
