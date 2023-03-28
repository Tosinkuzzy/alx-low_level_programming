/*
 * File: 0-malloc_checked.c
 * Auth: Tosinkuzzy
 */

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
void *mem = malloc(b);

if (mem == NULL)
exit(98);

return (mem);
}
