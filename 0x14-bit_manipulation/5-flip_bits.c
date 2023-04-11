/*
 * File: 5-flip_bits.c
 * @G: Tosinkuzzy
 */
#include "main.h"

/**
 * flip_bits - Entry point
 * Descript: Returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: First digit
 * @m: Second digit
 *
 * Return: Number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_op = n ^ m;
unsigned int counter = 0;

while (xor_op)
{
counter += (xor_op & 1);
xor_op >>= 1;
}
return (counter);
}
