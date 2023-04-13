#include <stdlib.h>

/**
 * argstostr - takes some arguments and turn them in to a string
 *
 * @ac: number of arguments passed
 * @av: array of argument values
 *
 * Return: pointer to string of args
 */
char *argstostr(int ac, char **av)
{
	int i, j, count = 1;
	char *str = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			count++;
			j++;
		}
		count++;
	}
	str = malloc(count);
	if (str == NULL)
		return (NULL);

	count = 0;
	for (i = 0; i < ac; i++, count++)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			*(str + count) = av[i][j];
			j++;
			count++;
		}
		*(str + count) = '\n';
	}
	*(str + count) = '\0';
	return (str);
}
