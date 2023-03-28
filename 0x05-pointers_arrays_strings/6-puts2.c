#include "main.h"

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		if (*(str + 1) == '\0')
			break;
		str += 2;
	}
	_putchar('\n');
}
