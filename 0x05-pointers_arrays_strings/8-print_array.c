#include <stdio.h>

/**
 * print_array - prints an array of intergers
 *
 * @a: the array to print
 * @n: number of intergers to print
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
