#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memmory using malloc
 * @b: number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

