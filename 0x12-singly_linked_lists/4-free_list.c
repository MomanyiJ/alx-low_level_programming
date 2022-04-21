#include "lists.h"

/**
  * free_list - fills memory with a constant byte
  * @head: pointer to node
  * Return: a number
  */
void free_list(list_t *head)
{
	list_t *savepoint;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			savepoint = head->next;
			free(head->str);
			free(head);
			head = savepoint;
		}
		free(head->str);
		free(head);
	}
}

