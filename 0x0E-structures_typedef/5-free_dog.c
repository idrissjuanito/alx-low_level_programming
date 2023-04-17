#include "dog.h"

/**
 * free_dog - free memory of dog struct
 *
 * @d: a struct of dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
