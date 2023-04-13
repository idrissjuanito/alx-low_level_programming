#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concats two strings
 *
 * @s1: string one to concat
 * @s2: string two to concat
 * @n: number of chars to take from s2
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str = NULL;
	int i = 0, l = 0, k = 0, len = 1;
	unsigned int j = 0;

	while (s2 != NULL && s2[j] != '\0' && j < n)
	{
		if (s1 != NULL && s1[l] != '\0')
		{
			len++;
			l++;
		}
		else
		{
			len++;
			j++;
		}
	}
	str = malloc(len);
	if (str == NULL)
		return (NULL);
	if (len > 1)
	{
		while (i < len - 1)
		{
			if (l > 0 && i < l)
			{
				str[i] = s1[i];
				i++;
			}
			if (j > 0 && i >= l)
			{
				str[i] = s2[k];
				k++;
				i++;
			}
		}
	}
	str[i] = '\0';
	return (str);
}
