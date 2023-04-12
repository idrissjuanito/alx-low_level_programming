#include <stdlib.h>

/**
 * str_concat - concats two string
 *
 * @s1: string one pointer
 * @s2: string two pointer
 *
 * Return: pointer to the new joined string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, sum = 1;
	char *str = NULL;

	while (s1[i] != '\0' && s1 != NULL)
	{
		sum++;
		i++;
	}
	while (s2[j] != '\0' && s2 != NULL)
	{
		sum++;
		j++;
	}
	str = malloc(sum);
	if (str == NULL)
		return (NULL);
	for (i = 0; s1 != NULL && s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; s2[j] != '\0' && s2 != NULL; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}
