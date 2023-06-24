/*
 * File: 3-factorial.c
 * Author: Tosinkuzzy
 */

#include "main.h"
#include <stdio.h>
/**
 * factorial - Entry p
 * des: Returns the factorial of a given number.
 * @n: The number to find the factorial of .
 *
 * Return: the factorial of n
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
