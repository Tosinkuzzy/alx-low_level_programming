/*
 * File: 1-print_binary.c
 * @G: Tosinkuzzy
 */
#include "main.h"

/**
 * print_binary - Entry point
 * Descript: Prints the binary representation of a number
 * @n: Printed in binary format
 */

void print_binary(unsigned long int n)
{
int i = 0;

while ((n >> i) > 1)
{
i++;
}
while (i >= 0)
{
if ((n >> i) & 1)
{
_putchar('1');
}
else
{
_putchar('0');
}
i--;
}
}
