#include <stdlib.h>

/**
 * _strdup - copies a string into a new mem location
 *
 * @str: pointer to the string to copy
 *
 * Return: pointer of the new memery allocated
 */
char *_strdup(char *str)
{
	char *str_ = NULL;
	int len = 1, i;
	char *_str = str;

	if (str == NULL)
		return (NULL);
	while (*_str != '\0')
	{
		len++;
		_str++;
	}

	str_ = malloc(len);
	if (str_ == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		str_[i] = str[i];
	return (str_);
}
