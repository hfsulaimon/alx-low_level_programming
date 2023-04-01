#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
  * free_list - Frees a list
  *
  * @head: pointer to the beginning of the lists
  *
  * Return: nothing
  */
void free_list(list_t *head)
{
	list_t *new;

	new = head;
	while (new != NULL)
	{
		free(new->str);
		free(new);
		new = new->next;
	}
}
