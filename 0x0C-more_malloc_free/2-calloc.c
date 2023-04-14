#include <stdlib.h>

/**
 * _calloc - allocates memory for an array then initialise values to 0
 *
 * @nmemb: number of array elements
 * @size: size of each array element
 *
 * Return: pointer to the array of memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	int *tmpArr = NULL;
	void *arr = malloc(nmemb * size);	

	if (arr == NULL || nmemb == 0 || size == 0)
		return (NULL);
	tmpArr = (int *)arr;

	while (i < nmemb * size)
	{
		*tmpArr = 0;
		i += 4;
		tmpArr++;
	}
	return (arr);
}
