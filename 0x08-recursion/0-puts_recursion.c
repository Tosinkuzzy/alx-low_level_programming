/*
 * File: 0-puts_recursion.c
 * Author: Tosinkuzzy
 */
#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Entry p
 * des: Print a string, followed by a new line.
 * @s: character
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}
putchar(*s);
_puts_recursion(s + 1);
}
