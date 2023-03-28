/*
 * File: Create_arrays
 * Auth: Tosin
 */

#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - Creates an array of chars
 *
 * @size: The size of array
 *
 * @c: The char to fll in the array
 *
 * Return: The array filled
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *s;

if (size == 0)
return (NULL);

s = malloc(size * sizeof(char));

if (s == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}
