#include "main.h"
#include <stdio.h>

/**
 * leet - encodes characters to 1337
 *
 * @s: the string to encode
 *
 * Return: returns encoded string
 */
char *leet(char *s)
{
	char *ss = s;
	int i;
	char lower_chars[] = {'a', 'e', 'o', 't', 'l'};
	int repl[] = {'4', '3', '0', '7', '1'};
	int len = sizeof(lower_chars);

	while (*ss != '\0')
	{
		for (i = 0; i < len; i++)
		{
			if (*ss == lower_chars[i] || *ss == lower_chars[i] - 32)
				*ss = repl[i];
		}
		ss++;
	}
	return (s);
}
