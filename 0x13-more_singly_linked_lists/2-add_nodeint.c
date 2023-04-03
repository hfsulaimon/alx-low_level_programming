#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - 'Adds a node to the beginning of the list'
  * @head: pointer to thead of the list
  * @n: the value to be added to the list
  * Return: pointer to the new element
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(*head));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

