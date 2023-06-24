/*
 * File: 1-print_rev_recursion.c
 * Author:Tosinkuzzy
 */

#include "main.h"

/**
 * _print_rev_recursion - Entry p
 * des: prints a string in reverse
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

