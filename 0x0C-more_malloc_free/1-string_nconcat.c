#include <stdlib.h>

char *concat_str(char *s1, char *s2, int len, unsigned int j, int l);
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
	int l = 0, len = 1;
	unsigned int j = 0;

	while (j < n)
	{
		if (s1 != NULL && s1[l] != '\0')
		{
			len++;
			l++;
		}
		else
		{
			if (s2 == NULL || s2[j] == '\0')
				break;
			len++;
			j++;
		}
	}

	str = concat_str(s1, s2, len, j, l);
	return (str);
}

/**
 * concat_str - concats two strings from their lengths
 * @s1: string 1
 * @s2: strng 2
 * @len: length of the strings
 * @j: length of string 1
 * @l: length of string 2
 *
 * Return: pointer to string concats
 */
char *concat_str(char *s1, char *s2, int len, unsigned int j, int l)
{
	char *str = malloc(len);
	int k = 0, i = 0;

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
