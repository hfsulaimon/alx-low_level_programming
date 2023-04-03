#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint -Delets the head of a node
  * @head: pointer to the head of the node
  * Return: the head node's data
  */
int pop_listint(listint_t **head)
{
	listint_t *temp_head;
	int num;

	if (*head == NULL)
		return (0);
	temp_head = *head;
	num = temp_head->n;
	*head = temp_head->next;
	free(temp_head);
	return (num);
}

