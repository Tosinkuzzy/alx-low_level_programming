/*
 * File: 3-factorial.c
 * Auth: Tosin
 *
 */

#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: The number to find the factorial of.
 *
 * return: if n > 0 - factorial of n.
 *          if n < 0-1 to indicate an error
*/
int factorial(int n)
{
if (n == 0)
{
	return (1);
}
else if (n < 0)
{
	return (-1);
}
else
{
	return  n * factorial(n-1);
}
}
