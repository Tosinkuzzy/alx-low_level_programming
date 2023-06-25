/*
 * File: 100-is_palindrome.c
 * Author: Tosinkuzzy
 */
#include "main.h"
int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
/**
 * is_palindrome - Entry p
 * des: help confirm true if the given string is a palidrome
 * find_strlen: checkmate lengh
 * @s: Character
 *
 * Return: 1, 0 otherwise.
 */
int is_palindrome(char *s)
{
int index = 0;
int len = find_strlen(s);

if (!(*s))
{
return (1);
}
return (check_palindrome(s, len, index));
}
/**
 * find_strlen - Entry p
 * des: Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_strlen(char *s)
{
int len = 0;

if (*s && *(s + len))
{
len++;
len += find_strlen(s + len);
}
return (len);
}
/**
 * check_palindrome - Entry p
 * des: Check if string is a palindrome
 * @s: The string to be checked.
 * @len: The length of s.
 * @index: The index of the string to be checked.
 *
 * Return: 1, 0 otherwise.
 */
int check_palindrome(char *s, int len, int index)
{
if (s[index] == s[len / 2])
{
return (1);
}
if (s[index] == s[len - index - 1])
{
return (check_palindrome(s, len, index + 1));
}
return (0);
}
