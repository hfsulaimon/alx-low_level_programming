#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
  * *add_node_end - Add node at the end of a list
  *
  * @head: pointer at the beginning of the list
  * @str: value in the lists
  *
  * Return: Pointer to the added element
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
