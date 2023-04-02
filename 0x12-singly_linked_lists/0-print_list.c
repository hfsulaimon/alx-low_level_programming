#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_list - Prints all elements of a list
  *
  * @h: pointer to a list
  *
  * Return: size_t
  */
size_t print_list(const list_t *h)
{
	size_t count;
	/* Initialize variable*/
	count = 0;
	while (h != 0)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		count++;
	}
	return (count);
}
