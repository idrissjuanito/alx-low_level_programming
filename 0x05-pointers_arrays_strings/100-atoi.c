#include "main.h"

/**
 * _atoi - convert string to interger
 *
 * @s: string to convert
 *
 * Return: returns the interger
 */
int _atoi(char *s)
{
	int i, found;
	int sign = 1;

	for (i = 0; s[i] != '\n'; i++)
	{
		int ascii = s[i];

		if (s[i] == '-')
			sign *= -1;
		if (ascii >= 48 && ascii <= 57)	
		{
			if (found > 0)
				found = (found * 10 + s[i]) * sign;
			else
				found = s[i] * sign;
		}
	}
	return (found);
}
