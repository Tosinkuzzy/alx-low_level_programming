#include "main.h"
<<<<<<< HEAD

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
=======
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '/0')
	{
		if (n[i] >= 'a' &&  n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
>>>>>>> cd3fcd330cf4c12a91020ef18079e81c1442b189
}
