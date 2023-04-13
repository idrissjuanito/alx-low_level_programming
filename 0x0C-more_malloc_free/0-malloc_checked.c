#include <stdlib.h>

/**
 * malloc_checked - allocates some memory
 *
 * @b: the amnout of memory to allocate
 *
 * Return: the pointer of the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}

	return (mem);
}
