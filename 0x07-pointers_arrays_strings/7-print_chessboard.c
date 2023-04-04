#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: size of the board
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < (int)sizeof(a); i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
