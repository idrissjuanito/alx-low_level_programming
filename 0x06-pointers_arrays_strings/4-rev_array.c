#include <stdio.h>

/**
 * reverse_array - reverses the content of an array
 *
 * @a: pointer to the array to reverse
 * @n: number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int half_n = n % 2 ? (n - 1) / 2 : n / 2;
	int tmp;

	for (i = 0; i < half_n; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
