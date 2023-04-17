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

	if (bingo == NULL)
		return (NULL);
	bingo->name = name;
	bingo->age = age;
	bingo->owner = owner;

	return (bingo);
}
