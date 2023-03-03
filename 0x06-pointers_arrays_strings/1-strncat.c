#include "main.h"
<<<<<<< HEAD

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
=======
/**
 * _strcat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] i = '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
>>>>>>> cd3fcd330cf4c12a91020ef18079e81c1442b189
	{
		dest[i] = src[j];
		i++;
		j++;
	}
<<<<<<< HEAD

	dest[i] = '\0';

=======
	dest[i] = '\0';
>>>>>>> cd3fcd330cf4c12a91020ef18079e81c1442b189
	return (dest);
}
