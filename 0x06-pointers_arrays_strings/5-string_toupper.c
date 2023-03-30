#include <stdio.h>

/**
 * string_toupper - converts letters of a string to upper case
 *
 * @str: string to transform
 *
 * Return: capitalised string
 */
char *string_toupper(char *str)
{
	char *strc = str;

	while (*strc != '\0')
	{
		if (*strc >= 97 && *strc <= 122)
		{
			*strc -= 32;
		}
		strc++;
	}
	return (str);
}
