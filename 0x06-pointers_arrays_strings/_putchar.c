<<<<<<< HEAD
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
=======
#include "main.h"
#include <unistd.h>

/**
 *  _putchar - write the character c to stdout
 *  @c: the character to print
 *
 *  Return: on success 1
 *  on error,_putchar.-1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return(write(1,&c,1));
>>>>>>> cd3fcd330cf4c12a91020ef18079e81c1442b189
}
