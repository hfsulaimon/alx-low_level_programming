#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
  * insert_nodeint_at_index - Inserts a new node at a given position
  * @head: pointer to the list
  * @idx: index to insert node
  * @n: data to insert in the list
  * Return: address of the new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i = 0;
	/* Get the total nodes in the list */
	if (head == NULL)
		return (NULL);
	temp = *head;
	while (temp->next != NULL)
	{
		i++;
		temp = temp->next;
	}
	/*Check if index is greater than node count*/
	if (idx > i || idx < 1)
		return (NULL);
	temp = *head;
	i = 1;
	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	new = malloc(sizeof(head));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (new);
}
