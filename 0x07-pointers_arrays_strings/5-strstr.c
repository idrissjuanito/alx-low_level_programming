#include "main.h"
#include <stdlib.h>

/**
 * _strstr - locates a substring
 *
 * @haystack: string to search
 * @needle: string to search for
 *
 * Return: pointer to the beginning if the substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *subs = NULL;
	int i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == *needle && subs == NULL)
		{
			subs = &haystack[i];
		}
		if (subs != NULL && haystack[i] != subs[j])
		{
			subs = NULL;
			j = 0;
		}
		if (haystack[i] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			break;
		}
		i++;
	}
	return (subs);
}
