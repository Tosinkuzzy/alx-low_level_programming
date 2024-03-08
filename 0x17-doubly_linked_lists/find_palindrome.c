#include <stdio.h>
#include <stdlib.h>
/**
 * is_palindrome - checks if an integer is a palindrome
 * @n: the integer to check
 *
 * Des: A palindrome is a number that reads the same forwards and backwards.
 * Return: 1 if the number is a palindrome, 0 otherwise
 */
int is_palindrome(int n)
{
int reversed = 0, original = n;
while (n > 0)
{
reversed = reversed * 10 + n % 10;
n /= 10;
}
return (original == reversed);
}
/**
 * main - finds the largest palindrome.
 *
 * Des: This program iterates through two 3-digit.
 * Return: 0 if the program executes successfully
 */
int main(void)
{
int max_palindrome = 0;
for (int i = 999; i >= 100; i--)
{
for (int j = 999; j >= 100; j--)
{
int product = i * j;
if (is_palindrome(product) && product > max_palindrome)
{
max_palindrome = product;
}
}
}
printf("%d\n", max_palindrome);
return (0);
}
