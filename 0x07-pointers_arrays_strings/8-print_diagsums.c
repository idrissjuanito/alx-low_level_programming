#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of the two diagonals of a square
 *
 * @a: the square matrix of intergers
 * @size: the size of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int  i, j;
	int diag_1 = 0, diag_2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
				diag_1 += a[i * size + j];
			if ((j + i) == size - 1)
				diag_2 += a[i * size + j];
		}
	}
	printf("%d, %d\n", diag_1, diag_2);
}
