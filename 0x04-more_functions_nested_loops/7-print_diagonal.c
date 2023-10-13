#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int dx, dy;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (dy = 0; dy < n; dy++)
	{
		for (dx = 0; dx < dy; dx++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
