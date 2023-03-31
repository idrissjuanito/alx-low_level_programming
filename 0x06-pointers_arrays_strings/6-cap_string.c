#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalises all words of a string
 *
 * @str: string to capitalise
 *
 * Return: The capitalised string
 */
char *cap_string(char *str)
{
	int i;
	char *strc = str;
	char prevc = '\n';
	char sep[] = {',', ';', '.', '{', '}', '(', ')', '!', '?', '\n', '\t', ' '};
	int sep_length = sizeof(sep) / sizeof(char);

	while (*strc != '\0')
	{
		if (*strc >= 97 && *strc <= 122)
		{
			for (i = 0; i < sep_length; i++)
			{
				if (sep[i] == prevc)
					*strc -= 32;
			}
		}
		prevc = *strc;
		strc++;
	}
	return (str);
}
