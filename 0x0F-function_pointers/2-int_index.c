#include "function_pointers.h"

/**
 * int_index - searches and returns the index of an interger
 *
 * @array: array to search
 * @size: number of elements in the array
 * @cmp: function to test for interger
 *
 * Return: the index of first interger in array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
