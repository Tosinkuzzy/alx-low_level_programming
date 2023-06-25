/*
 * File: 100-is_palindrome.c
 * Author: Tosinkuzzy
 */

#include "main.h"
#include <string.h>
/**
 * is_palindrome - Entry p
 * @s: string to check if it is a palindrome
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
			return (0);
	}
	return (1);
}
