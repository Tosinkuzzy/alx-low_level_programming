#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Alx School students.
 * description: NULL if ac == 0 or av == NULL
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
char *s;

s = argstostr(ac, av);
if (s == NULL)
{
return (1);
}
printf("%s", s);
free(s);
return (0);
}
