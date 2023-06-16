/*
 * File: 101-mul.c
 * Author: Tosinkuzzy
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * _print - moves a string one place to the left and prints the string
 * @str: string to move
 * @l: size of string
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
int num1, num2, sum;

if (argc != 3)
{
printf("Error\n");
return (98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

if (num1 == 0 || num2 == 0)
{
printf("Error\n");
return (98);
}
sum = num1 * num2;

printf("%d\n", sum);

return (0);
}
