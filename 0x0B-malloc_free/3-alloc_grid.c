#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - creates a two dimensional array
 *
 * @width: size if each nested array
 * @height: the size of the main array
 *
 * Return: pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{
	int **arr = NULL;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		arr[i] = malloc(width * sizeof(int));
	for (i = 0; i < height; i++)
	{
		j = 0;
		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr);
}
