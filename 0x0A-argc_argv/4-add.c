#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		char *ptr;
		int num = strtol(argv[i], &ptr, 10);

		if (*ptr != '\0' || num <= 0 || num > INT_MAX - sum)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", argc > 1 ? sum : 0);
	return (0);
}

