#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;
	char error_[] = "Error\n";

	if (argc != 4)
	{
		printf(error_);
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (!get_op_func(op) || op[1] != '\0')
	{
		printf(error_);
		exit(99);
	}

	if ((*op == '/' ||*op == '%') && !num2)
	{
		printf(error_);
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
