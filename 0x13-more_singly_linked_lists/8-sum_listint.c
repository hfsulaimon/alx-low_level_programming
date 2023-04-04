#include <stddef.h>
#include "lists.h"

/**
  * sum_listint - Sums the data in a list
  * @head: pointer to the head of the list
  * Return: sum of data
  */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp->next != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	sum = sum + temp->n;
	return (sum);
}
