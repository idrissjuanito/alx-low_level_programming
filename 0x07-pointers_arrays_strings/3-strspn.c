#include "main.h"

/**
 * _strspn - that gest the lenght of a prefix substring
 *
 * @s: string to work with
 * @accept: range of characters to accept
 *
 * Return: the number of bytes in the prefix  substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int prev_i = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				i++;
				break;
			}
			j++;
		}
		if (i == prev_i)
			break;
		prev_i = i;
	}
	return (i);
}
