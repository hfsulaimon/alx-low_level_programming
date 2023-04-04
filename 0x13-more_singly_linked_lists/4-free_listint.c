#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - Frees an allocated memory to a list
  * @head: pointer to the head of the list
  * Return: nothing
  */
void free_listint(listint_t *head)
{
	listint_t *new, *temp;

	if (head == NULL)
		return (NULL);
	new = head;
	while (new->next != NULL)
	{
		temp = new->next;
		free(new);
		new = temp;
	}
	free(new);
	head = NULL;
}

