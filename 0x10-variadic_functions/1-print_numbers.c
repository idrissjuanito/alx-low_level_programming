#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_numbers - prints the some numbers followed by a new line
 *
 * @seperator: seperator of all the numbers
 * @n: number of arguments to print
 *
 * Return: nothing at all
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int j;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (seperator != NULL && i < (n - 1))
		{
			for (j = 0; seperator[j] != '\0'; j++)
				printf("%c", seperator[j]);
		}
	}
	printf("\n");
	va_end(args);
}
