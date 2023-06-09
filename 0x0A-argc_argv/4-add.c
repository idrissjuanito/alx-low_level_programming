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
	int sum = 0, facto = 0, i;

	if (argc < 3)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		while (*argv[i] != '\0')
		{
			char c = *argv[i];

			if (!(c >= 48 && c <= 57))
			{
				printf("Error\n");
				return (1);
			}
			if (facto > 0)
				facto *= 10;
			facto += *argv[i] - '0';
			argv[i]++;
		}
		sum += facto;
		facto = 0;
	}
	printf("%d\n", sum);
	return (0);
}
