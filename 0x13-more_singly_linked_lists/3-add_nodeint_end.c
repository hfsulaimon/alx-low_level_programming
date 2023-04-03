#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint_end - 'Adds a node to the end of a list'
  * @head: pointer to thead of the list
  * @n: the value to be added to the list
  * Return: pointer to the new element
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp_pointer;

	new = malloc(sizeof(*head));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		temp_pointer = *head;
		while (temp_pointer->next != NULL)
			temp_pointer = temp_pointer->next;
		temp_pointer->next = new;
	}
	return (*head);
}
