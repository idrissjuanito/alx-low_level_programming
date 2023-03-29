#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - convert string to interger
 *
 * @s: string to convert
 *
 * Return: returns the interger
 */
int _atoi(char *s)
{
	int i; 
	int sign = 1;
	int found = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		int ascii = s[i];
		int num = s[i] - '0';

		if (s[i] == '-')
			sign *= -1;
		if (ascii >= 48 && ascii <= 57)
		{
			if (found > 0)
				found = found * 10 + num;
			else
				found = num;
			if(!(s[i + 1] >= 48 && s[i + 1] <= 57))
			{
				found *= sign;
				break;
			}
		}
	}
	return (found);
}
