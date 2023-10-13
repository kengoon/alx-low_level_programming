#include "main.h"

/**
 * print_square - prints hashes squares, followed by a new line.
 * @size: size of the square.
 * Return: no return.
 */
void print_square(int size)
{
	int dx, dy;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (dy = 0; dy < size; dy++)
	{
		for (dx = 0; dx < size; dx++)
			_putchar('#');
		_putchar('\n');
	}
}
