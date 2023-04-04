#include "main.h"

/**
 * set_string - sets the value of a pointer to a character
 *
 * @s: the pointer to the pointer of the character to replace
 * @to: The pointer to the character to set to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
