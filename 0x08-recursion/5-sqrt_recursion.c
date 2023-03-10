/*
 * File: 5-sqrt_recursion.c
 * Auth: Tosin
 */

#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @num: The number to find the square root of.
 * @root: The root to be tested.
 *
 * Return: if the number as a natural sqyare root- the square root.
 *         if the number doesnt have a natural sqaure root --1
 */
int find_sqrt(int num,int root)
{
	if ((root *root)== num)
	return(root);

	if (root == num / 2)
		return(-1);
	return(find_sqrt(num,root + 1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of 
 *
 * Return: if n has a natural square root - the natural square root of n.
 */

int _sqrt_recursion(int n)
{
int root = 0;
if (n < 0)
return(0-1);

if (n == 1)
return(1);

return(find_sqrt(n, root));
}
