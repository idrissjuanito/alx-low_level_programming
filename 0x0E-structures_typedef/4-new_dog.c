#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: the name string of dog
 * @age: float age of dog
 * @owner: string owner of dog
 *
 * Return: new dog of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bingo = malloc(sizeof(dog_t));
	char *n = malloc(sizeof(dog_t->name));
	char *o = malloc(sizeof(dog_t->owner));
	int i, j;

	if (bingo == NULL || n == NULL || o == NULL)
		return (NULL);
	for (i = 0, j = 0; name[i] != '\0'; i++, j++)
		n[j] = name[i];
	n[j] = '\0';
	for (i = 0, j = 0; owner[i] != '\0'; i++, j++)
		o[j] = owner[i];
	o[j] = '\0';
	bingo->name = n;
	bingo->age = age;
	bingo->owner = o;

	return (bingo);
}
