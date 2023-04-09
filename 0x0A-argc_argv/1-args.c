#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 *
 * @argc: number of arguments at runtime
 * @argv: Array of arguments passed at the prompt
 *
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	if (strcmp(argv[0], "") > 0)
		printf("%d\n", argc - 1);
	return (0);
}
