#include <stdlib.h>

/**
 * strtow - splits a string into words
 *
 * @str: string to split
 *
 * Return: an arrary of the words
 */
char **strtow(char *str)
{
	char **strr, words = NULL;
	char *stri = NULL;
	int i, j, k, l, n_words, charCount = 0;
	int strEnded = 0;

	if (str == NULL || str == "")
		return (NULL);

	while (strEnded == 0)
	{
		if (str[i] == '\0')
			strEnded = 1;
		if (str[i] != ' ')
		{
			charCount++;
			if (k < 0)
				k = i;
		}
		if ((str[i] == ' ' || str[i] == '\n') && k >= 0)
		{
			j, l = 0;
			n_words++;
			words = malloc(n_words * sizeof(char *));
			if (words == NULL)
				return (NULL);
			if (strr == NULL)
				strr = words;
			else
			{
				while (j < n_words - 1)
				{
					words[j] = strr[j];
					j++;
				}
				free(strr);
				strr = words;
			}

			stri = malloc(charCount + 1);
			if (stri = NULL)
				return (NULL);
			while (k < i)
			{
				stri[l] = str[k];
				k++;
				l++;
			}
			stri[l] = '\0';
			strr[j] = stri;
			k = -1;
			words = NULL;
			charCount = 0;
		}
		i++;
	}
	return (strr);
}
