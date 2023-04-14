#include <stdlib.h>

/**
 * array_range - creates and allocates memory for an array of intergers
 *
 * @min: value of minimum value to store
 * @max: value of maximum to store
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *arr = NULL;
	int *tmpArr = NULL;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	tmpArr = arr;
	while (min <= max)
	{
		*tmpArr = min;
		tmpArr++;
		min++;
	}
	return (arr);
}
