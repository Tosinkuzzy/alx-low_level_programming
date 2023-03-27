/*
 * File: 5-sqrt_recursion.c
 * Auth: Tosin
 */
#include "main.h"
/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @num: The number to find the square root of.
 * @root: The root to be tested.
 *
 * Return: if the number as a natural sqyare root- the square root.
 *         if the number doesnt have a natural sqaure root --1
 */

/**
 *
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of
 *
 * Return: if n has a natural square root - the natural square root of n.
 */

int find_sqrt(int n, int i);

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return find_sqrt(n, 1);
}

int find_sqrt(int n, int i)
{
if (i * i == n)
return (i);
else if (i * i > n)
return (-1);
else
return find_sqrt(n, i + 1);
}
