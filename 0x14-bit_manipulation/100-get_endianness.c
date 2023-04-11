/*
 * File: 100-get_endianness.c
 * @G: Tosinkuzzy
 */
#include "main.h"

/**
 * get_endianness - Entry point
 * Descript: Checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
unsigned int digit = 1;
char *data = (char *)&digit;

if (*data)
{
return (1);
}
else
{
return (0);
}
}
