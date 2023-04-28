#include "3-calc.h"
#include  <stdio.h>
#include <stdlib.h>

/**
 * main - entry point to the program
 *
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: nothing
 */
int main(int argc, char **argv)
{
	int (*f)(int, int);
	int num1, num2;
	char opr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	opr  = argv[2][0];
	num1  = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((num1 == 0 || num2 == 0) && (opr == '/' || opr == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	f = get_op_func(argv[2]);
	if (!f)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", (*f)(num1, num2));
	return (0);
}
