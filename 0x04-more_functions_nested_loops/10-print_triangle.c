#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int dx, dy, tr;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (dy = 0; dy <= (size - 1); dy++)
	{
		for (dx = 0; dx < (size - 1) - dy; dx++)
			_putchar(' ');
		for (tr = 0; tr <= dy; tr++)
			_putchar('#');
		_putchar('\n');
	}
}
