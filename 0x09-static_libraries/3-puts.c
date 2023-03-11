#include <stdio.h>

/**
* _puts - prints a string to stdout
* @str: the string to be printed
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
}

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char *str = "\"Programming is like building a multilingual puzzle";

	_puts(str);
	return (0);
}

