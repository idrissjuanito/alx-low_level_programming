#include <stdio.h>

int main(void){

	long int num = 42;
	long long int num2= 324;

	printf("size of char: %i byte(s)\n", sizeof(char));
	printf("size of int: %i byte(s)\n", sizeof(int));
	printf("size of long int: %i byte(s)\n", sizeof(num));
	printf("size of long long int: %i byte(s)\n", sizeof(num2));
	printf("size of float: %i byte(s)\n", sizeof(float));
}
