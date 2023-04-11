/*
 * File: 0-binary_to_uint.c
 * @G: Tosinkuzzy
 */

#include "main.h"

/**
 * binary_to_uint - Entry point
 * Descript: Converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: The converted number, or 0 if b is NULL or there's a non 0 or 1 char
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int digit = 0;
unsigned int i = 0;

if (!b)
{
return (0);
}
while (b[i] != '\0')
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
i++;
}
i = 0;
while (b[i] != '\0')
{
digit <<= 1;
if (b[i] == '1')
{
digit += 1;
}
i++;
}
return (digit);
}
