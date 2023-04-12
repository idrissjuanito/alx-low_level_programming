#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of characters initialized
 *
 * @size: size of array to create
 * @c: character to initialize array
 *
 * Return: pointer to the array buffer
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
