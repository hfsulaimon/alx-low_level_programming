#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * list_len - Prints number of  elements in a list
  *
  * @h: pointer to a list
  *
  * Return: size_t
  */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != 0)
	{
		h = h->next;
		count++;
	}
	return (count);
}
