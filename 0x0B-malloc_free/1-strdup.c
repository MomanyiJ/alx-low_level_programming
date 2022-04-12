#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocate a string
 * @str: string to duplicate
 *
 * Return: pointer to string if success
 */
char *_strdup(char *str)
{
	char *new_malloc;
	int i;

	if (str == NULL)
		return (NULL);
	/* Allocating new space */
	new_malloc = malloc(sizeof(str));
	/*checking*/

	if (new_malloc == NULL)
		return (NULL);

	/*copy the string*/

	for (i = 0; str[i] != '\0'; i++)
	{
		new_malloc[i] = str[i];
	}
	return (new_malloc);
	free(new_malloc);
}
