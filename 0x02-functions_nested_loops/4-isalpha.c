#include "main.h"

/**
 * _isalpha - checks is a character is an alphabetic char
 *
 * @c: is the character to check
 *
 * Return: returns 1 on sucess or 0 on failure
 */
int _isalpha(int c)
{
	if (c >= 64 && c <= 122)
	{
		if (c <= 90 || c >= 97)
			return (1);
	}
	return (0);
}
