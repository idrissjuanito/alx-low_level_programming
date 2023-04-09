#include <stdio.h>
#include <stdlib.h>

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
	int change, i, n_coins = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("0\n");
		return (1);
	}
	for (i = 0; i < (int)(sizeof(coins) / sizeof(int)); i++)
	{
		if (change == 0)
			break;
		n_coins += change / coins[i];
		change %= coins[i];
	}
	printf("%d\n", n_coins);
	return (0);
}
