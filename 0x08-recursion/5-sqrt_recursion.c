/*
 * File: 5-sqrt_recursion.c
 * Author: Tosinkuzzy
 */

#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - Entry p
 * des: Returns the natural square root of a number
 * @n: The number to calculate the sqaure root of.
 *
 * Return: The natural square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_recursion_h(n, 1));
}

/**
 * _sqrt_recursion_h - Entry p
 * des: Helps to calculate the natural square root of a number.
 * @n: The number to calculate the square root.
 * @i: The possible value for the square root.
 *
 * Return: The natural square root of n.
 */
int _sqrt_recursion_h(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_recursion_h(n, i + 1));
}
