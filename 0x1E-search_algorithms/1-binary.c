#include <stddef.h>
#include <stdio.h>


int binary_helper(int *array, size_t lower, size_t upper, int value);
void print_arr(int *arr, size_t lower, size_t upper);
/**
 * binary_search - searches through an array using binary search
 *
 * @array: pointer of the array to search through
 * @size: size of the array
 * @value: to search for
 *
 * Return: index of the value being search or -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array || size < 1)
		return (-1);
	return (binary_helper(array, 0, size - 1, value));
}

/**
 * binary_helper - search array using binary search recursively
 *
 * @array: pointer of the array to search
 * @lower: first element of subarray
 * @upper: last element of the array
 * @value: value to search for
 *
 * Return: index of found value or -1
 */
int binary_helper(int *array, size_t lower, size_t upper, int value)
{
	size_t mid;

	print_arr(array, lower, upper);
	if (upper == lower && array[lower] != value)
		return (-1);
	mid = (upper - lower) / 2 + lower;
	if (array[mid] == value)
		return (value);
	else if (array[mid] < value)
		return (binary_helper(array, mid + 1, upper, value));
	else
		return (binary_helper(array, lower, mid - 1, value));
}

/**
 * print_arr - prints subarray using first and last indexes
 *
 * @arr: array to print from
 * @lower: first element index of subarray to print
 * @upper: index of last element
 *
 * Return: void
 */
void print_arr(int *arr, size_t lower, size_t upper)
{
	size_t i;

	printf("Searching in array: ");
	for (i = lower; i <= upper; i++)
		if (i != upper)
			printf("%d, ", arr[i]);
		else
			printf("%d\n", arr[i]);
}
