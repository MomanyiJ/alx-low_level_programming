#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiple two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Alwaus 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 1 || argc == 2)
		printf("Error\n");
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
