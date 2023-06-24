/*
 * File: 5-sqrt_recursion.c
 * Author: Tosinkuzzy
 */

#include "main.h"

int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
if (n == 0 || n == 1)
	return (n);
return (_sqrt_recursion_helper(n, 1));
}

int _sqrt_recursion_helper(int n, int i)
{
if (i * i == n)
	return (i);
if (i * i > n)
	return (-1);
return (_sqrt_recursion_helper(n, i + 1));
}
