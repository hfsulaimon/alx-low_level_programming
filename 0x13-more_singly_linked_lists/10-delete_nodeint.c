#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - Deletes a node at nth position
  * @head: pointer to head of node
  * @index: nth position to be deleted
  * Return: integer
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *nodeDel;
	unsigned int i = 0;
	/* Get the total nodes in the list */
	if (*head == NULL)
		return (-1);
	temp = *head;
	while (temp->next != NULL)
	{
		i++;
		temp = temp->next;
	}
	/*Check if index is greater than node count*/
	if (index > i)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	temp = nodeDel = *head;
	i = 1;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	/* Get the node to be deleted */
	nodeDel = temp->next;
	temp->next = nodeDel->next;
	free(nodeDel);
	return (1);
}

