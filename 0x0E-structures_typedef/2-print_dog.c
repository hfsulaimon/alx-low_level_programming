#include "dog.h"
#include <stdio.h>

/**
  * print_dog - Prints the value of elments in struct dog
  *
  * @d: variable type of stuct dog
  *
  * Return: nothing
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d->name == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->name);
		printf("Age: ");
		printf("%f\n", d->age);
		printf("Owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}

