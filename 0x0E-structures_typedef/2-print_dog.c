#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: type of dog
 *
 * Return: returns void
 */
void print_dog(struct dog *d)
{
	char *name, *owner;
	float age = d->age;

	if (d->name == NULL)
		name = "(nil)";
	else
		name = d->name;
	if (d->owner == NULL)
		owner = "(nil)";
	else
		owner = d->owner;
	if (d == NULL)
		return;
	printf("Name: %s\n", name);
	printf("Age: %f\n", age);
	printf("Owner: %s\n", owner);
}
