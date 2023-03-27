/**
 * File: 0-puts_recursion.c
 * Auth: Tosin
 */
#include "main.h"
/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
{
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
