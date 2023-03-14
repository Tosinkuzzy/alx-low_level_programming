/*
 * File: Create_arrays
 * Auth: Tosin
 */

#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 *
 * @size: size of array
 *
 * @c: char to assign
 *
 * Description: create array of size size and assign char c
 */

char *create_array(unsigned int size, char c)
{
char *array;

if (size == 0)
return (NULL);

array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);

for (unsigned int i = 0; i < size; i++)
array[i] = c;

return (array);
}
