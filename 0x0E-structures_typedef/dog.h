#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - Define dog structure with three elements
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
