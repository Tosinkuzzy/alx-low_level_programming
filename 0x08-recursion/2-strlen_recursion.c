/*
 * File: 2_strlen_recursion.c
 * Author: Tosinkuzzy
 */

#include "main.h"

/**
 * _strlen_recursion - Entry p
 * des: Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The lenght of the string.
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (_strlen_recursion(s
+ 1) + 1);
}
