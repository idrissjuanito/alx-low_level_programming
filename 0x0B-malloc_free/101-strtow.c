#include <stdlib.h>

char *cp_str(int nChars, char *strFrom, int start, int stop);

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
	int i = 0, j, k = -1, n_words = 0, charCount = 0;
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
			j = 0;
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

			strr[j] = cp_str(charCount, str, k, i);
			k = -1;
			words = NULL;
			charCount = 0;
		}
		i++;
	}
	return (strr);
}
/**
 * cp_str - copy a string of chars
 *
 * @nChars: the number of characters to copy
 * @strFrom: the string to copy from
 * @start: the start index to copy from
 * @stop:  stop index to copy from
 *
 * Return: pointer to char
 */
char *cp_str(int nChars, char *strFrom, int start, int stop)
{
	int i = 0;

	sChars++;
	char *stri = malloc(nchars);

	if (stri == NULL)
		return (NULL);
	while (start < stop)
	{
		stri[i] = strFrom[stop];
		start++;
		i++;
	}
	stri[i] = '\0';

	return (stri);
}
