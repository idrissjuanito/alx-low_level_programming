#include <stddef.h>
#include <stdio.h>

/**
 * linear_search - searches for a value using linear search algorithm
 *
 * @array: pointer to the array to search through
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: the index of the found value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size < 1)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int) i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
