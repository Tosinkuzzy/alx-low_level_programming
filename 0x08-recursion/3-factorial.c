/*
 * File: 3-factorial.c
 * Author: Tosinkuzzy
 */

#include "main.h"
#include <stdio.h>
/**
 * factorial - returns the factorial of a given number.
 * n: The number to find the factorial of .
 *
 * return: the factorial of n
 */
int factorial(int n)
{
if (n < 0)
	return (-1);
if (n == 0)
	return (1);
return (n * factorial(n - 1));
}
