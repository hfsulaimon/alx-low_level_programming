#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
  * print_listint - Prints all nodes in a lists
  * @h: pointer to the head of the listt
  * Return: integer
  */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

