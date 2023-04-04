#include <stddef.h>
#include "lists.h"

/**
  * get_nodeint_at_index - Returns the nth node of a list
  *
  * @head: pointer to the head of the list
  * @index: index of the node
  *
  * Return: node at nth index
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;
	/* Get the total nodes in the list */
	temp = head;
	while (temp->next != NULL)
	{
		i++;
		temp = temp->next;
	}
	/*Check if index is greater than node count*/
	if (index > i)
		return (NULL);
	temp = head;
	i = 1;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	temp = temp->next;
	return (temp);
}

