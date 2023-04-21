#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_strings - prints strings passed as arguments followed by a new line
 *
 * @seperator: seperator of all the all the strings
 * @n: number of arguments to print
 *
 * Return: nothing at all
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int j, l;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			str = "(nil)";
		for (l = 0; str[l] != '\0'; l++)
		{
			printf("%c", str[l]);
			if (seperator != NULL && i < (n - 1))
			{
				for (j = 0; seperator[j] != '\0'; j++)
					printf("%c", seperator[j]);
			}
		}
	}
	printf("\n");
	va_end(args);
}
