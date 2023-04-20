#include "fiunction_pointers.h"

/**
 * array_iterator - iterates through an array
 *
 * @array: the array to iterate
 * @size: the size of the array
 * @action: the function to call for elements of the array
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
