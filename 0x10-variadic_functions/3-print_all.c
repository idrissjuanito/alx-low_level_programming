#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 *
 * @format: list of types of arguments passed
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, it;
	va_list args;
	char *str, *seperator = "";
	float fl;
	char c;

	va_start(args, format);

	while (format[i] != '\0' && i < 9)
	{
		switch (format[i])
		{
			case 's':
				str = (char *)va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", seperator, str);
				break;
			case 'f':
				fl = (float)va_arg(args, int);
				printf("%s%f", seperator, fl);
				break;
			case 'i':
				it = (int)va_arg(args, int);
				printf("%s%d", seperator, it);
				break;
			case 'c':
				c = (char)va_arg(args, int);
				printf("%s%c", seperator, c);
				break;
			default:
				i++;
				continue;
		}
		i++;
		seperator = ", ";
	}
	printf("\n");
	va_end(args);
}
