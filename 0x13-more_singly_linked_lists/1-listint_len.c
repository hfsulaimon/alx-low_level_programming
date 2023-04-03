#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
  * listint_len - Prints all nodes in a lists
  * @h: pointer to the head of the listt
  * Return: integer
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
