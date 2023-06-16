/*
* File: 4-pow_recursion.c
* Author: Tosinkuzzy
*/
#include <math.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _pow_recursion - Returns the value of x raised to the power of y.
* @x: The number to be raised.
* @y: The exponent.
*
* Return: The result of x raised to the power of y.
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
if (y == 0)
	return (1);
return (x *
_pow_recursion(x, y - 1));
}
