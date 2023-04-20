#include "function_pointers.h"

/**
 * print_name - prints a string
 *
 * @name: name to print
 * @f: function to call and pass name to
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
