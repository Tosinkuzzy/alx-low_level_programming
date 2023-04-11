/*
 * File: 2-get_bit.c
 * @: Tosinkuzzy
 */

#include "main.h"

/**
 * get_bit - Entry point
 * Descript: Returns the value of a bit at a given index
 * @n: Number to get the bit from
 * @index: The index, starting from 0 of the bit you want to get
 *
 * Return: The value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
n >>= index;
if (n & 1)
{
return (1);
}
else
{
return (0);
}
}
