#include <stdio.h>

int main(void)
{

	long int num = 42;
	long long int num2 = 324;

	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(num));
	printf("Size of a long long int: %i byte(s)\n", sizeof(num2));
	printf("Size of a float: %i byte(s)\n", sizeof(float));

	return (0);
}
