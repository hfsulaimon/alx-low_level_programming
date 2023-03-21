#include "dog.h"

/**
  * init_dog - Initializes the elements of struct dog
  *
  * @d: variable type of struct dog
  * @name: first element
  * @age: second element
  * @owner: third element
  *
  * Return: initialized elements
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
