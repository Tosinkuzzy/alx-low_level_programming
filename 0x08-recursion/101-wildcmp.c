/*
 * File: 101-wildcmp.c
 * Author: Tosinkuzzy
 */

#include "main.h"

/**
 * wildcmp - Entry p
 * des: compares two strings and returns 1 if identical
 * @s1: string to be checked
 * @s2: pattern to be used.
 *
 * Return: 1 if identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '\0')
{
	return (1);
}
while (*s1 != '\0' && !wildcmp(s1 + 1, s2) && !wildcmp(s1, s2 + 1))
s1++;
return (*s1 != '\0');
}
if (*s1 == '\0' || *s2 == '\0')
{
return (*s1 == *s2);
}
if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}
