/**
 * swap_int - swaps the value of two numbers
 *
 * @a: first value to swap
 * @b: second value to swap
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
