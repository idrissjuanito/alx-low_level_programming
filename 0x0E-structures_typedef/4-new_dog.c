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
	char *n = malloc(sizeof(*name));
	char *o = malloc(sizeof(*owner));
	int i = 0, j = 0;

	if (bingo == NULL || n == NULL || o == NULL)
		return (NULL);
	while (name[j] != '\0')
	{
		n[i] = name[j];
		i++;
		j++;
	}
	n[i] = '\0';
	i = 0;
	j = 0;
	while (o[i] != '\0')
	{
		o[i] = owner[j];
		i++;
		j++;
	}
	o[i] = '\0';
	bingo->name = n;
	bingo->age = age;
	bingo->owner = o;

	return (bingo);
}
