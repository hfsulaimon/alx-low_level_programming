#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - Frees allocated memory to a list
  * @head: Pointer to head of the list
  * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = *head;
	while (temp->next != NULL)
	{
		free(*head);
		temp = temp->next;
		*head = temp;
	}
	free(temp);
	*head = NULL;
}

