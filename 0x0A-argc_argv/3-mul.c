#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: number of arguments at runtime
 * @argv: Array of arguments passed at the prompt
 *
 * Return: Always 0 on success
 */
int main(int argc, char **argv)
{
	int prod = 1, facto = 0, i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i <= 2; i++)
	{
		int sign = 1;

		while (*argv[i] != '\0')
		{
			if (*argv[i] == '-')
			{
				sign *= -1;
				argv[i]++;
				continue;
			}
			if (facto > 0)
				facto *= 10;
			facto += *argv[i] - '0';
			argv[i]++;
		}
		facto *= sign;
		prod *= facto;
		facto = 0;
	}
	printf("%d\n", prod);
	return (0);
}
