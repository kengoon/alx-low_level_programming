#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * isNumeric - determines if string has only numbers
 * @str: input string
 * Return: 0 if false, 1 if true
 */
int isNumeric(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiply - multiplies two numbers and displays it
 * @f: first "number"
 * @s: second "number"
 */
void multiply(char *f, char *s)
{
	int i, len1, len2, total, fdigit, sdigit, res = 0, tmp;
	int *ptr;

	len1 = strlen(f);
	len2 = strlen(s);
	tmp = len2;
	total = len1 + len2;
	ptr = calloc(sizeof(int), (len1 + len2));
	for (len1--; len1 >= 0; len1--)
	{
		fdigit = f[len1] - '0';
		res = 0;
		len2 = tmp;
		for (len2--; len2 >= 0; len2--)
		{
			sdigit = s[len2] - '0';
			res += ptr[len2 + len1 + 1] + (fdigit * sdigit);
			ptr[len1 + len2 + 1] = res % 10;
			res /= 10;
		}
		if (res)
			ptr[len1 + len2 + 1] = res % 10;
	}
	while (*ptr == 0)
	{
		ptr++;
		total--;
	}
	for (i = 0; i < total; i++)
		printf("%i", ptr[i]);
	free(ptr);
	printf("\n");
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !isNumeric(argv[1]) || !isNumeric(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	if (*argv[1] == 48 || *argv[2] == 48)
		printf("0\n");
	else
		multiply(argv[1], argv[2]);
	return (0);
}

