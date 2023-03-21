#include "main.h"

/**
 * _islower - checks if a character in lowercase
 *
 * @c: is the character to check
 *
 * Return: 1 for success
 * On error, 0 is returned
 */
int _islower(int c)
{
	if (c > 90)
		return (1);
	return (0);
}
