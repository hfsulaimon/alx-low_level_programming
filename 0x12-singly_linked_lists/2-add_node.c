#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
  * *add_node - Add node at the beginning of a list
  *
  * @head: pointer at the beginning of the list
  * @str: value in the lists
  *
  * Return: Pointer to the added element
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}




