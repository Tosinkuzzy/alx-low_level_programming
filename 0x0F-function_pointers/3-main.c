#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Entry p
 * des: operations.
 * @argc: arguments count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n1, n2, result;
	char *op_func;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	op_func = argv[2];
	if (get_op_func(op_func) == NULL || op_func[1] != '\0')
	{
		printf("Error\n");
			exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(op_func)(n1, n2);
	printf("%d\n", result);
	return (0);
}
