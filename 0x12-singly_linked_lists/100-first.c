#include<stdio.h>

void first(void) __attribute__((constructor));

/**
 * first - function that prints before main
 *
 * Return: nothing
 */
void first(void)
{
char *sr = "I bore my house upon my back!";
printf("You're beat! and yet, you must allow,\n%s\n", sr);
}
