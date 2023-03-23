#include "main.h"

/**
 * _isdigit - checks if a character is a digit or a letter
 *
 * @c: character to check
 *
 * Return: returns an interger
 */
int _isdigit(int c)
{
	int ascii = c;

	if (ascii  >= 48 &&  ascii <= 57)
		return (1);
	return (0);
}
