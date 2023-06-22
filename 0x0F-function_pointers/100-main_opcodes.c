#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * main - Entry p
 * des:  prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Alwaya 0 (success)
 */
int main(int argc, char *argv[])
{
int bytes, i;
char *arr;

if (argc != 2)
{
printf("Error\n");
return (1);
}
bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
return (2);
}
arr = (char *)main;
for (i = 0; i < bytes; i++)
{
printf("%02hhx%c", arr[i], i < bytes -1 ? ' ' : '\n');
}
return (0);
}
