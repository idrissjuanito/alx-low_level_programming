#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 *
 * @d: type of dog
 *
 * Return: returns void
 */
void print_dog(dog *d)
{
	char *name = d->name;
	float age = d->age;
	char *owner = d->owner;

	printf("Name: %s\n", name ? name : "(nil)");
	age ? printf("Age: %f\n", age) : printf("Age: (nil)");
	printf("Owner: %s\n", owner ? owner : "(nil)");
}
