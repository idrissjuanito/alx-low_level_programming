#include "main.h"
#include <stdio.h>

/**
 * _strcmp - companres two strings
 *
 * @s1: first string param
 * @s2: second string param
 *
 * Return: 0 if strings are equal and any other number if they aren't
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, same = 0, sum_s1 = 0, sum_s2 = 0;
	int ascii_s1, ascii_s2;

	while (s1[i] != '\0' || s2[j] != '\0')
	{
		ascii_s1 = (int)s1[i];
		ascii_s2 = (int)s2[j];
		if (ascii_s1 != ascii_s2)
			same = 15;
		if (s1[i] == '\0' && s2[j] == '\0' && same == 0)
			return (0);
		if (s1[i] == '\0' && s2[j] == '\0')
			break;
		if (s1[i] != '\0')
			i++;
		if (s2[j] != '\0')
			j++;
		sum_s1 += ascii_s1;
		sum_s2 += ascii_s2;
	}
	same = sum_s1 > sum_s2 ? (same) : (same * -1);
	return (same);
}
