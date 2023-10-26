#include "main.h"

/**
 * get_sqrt - Finds the natural square root of @n.
 * @n: The number to find the square root of.
 * @x: The recursed number to be tested.
 *
 * Return: square root or -1
 */
int get_sqrt(int n, int x)
{
	if ((x * x) == n)
		return (x);

	if (x == n / 2)
		return (-1);

	return (get_sqrt(n, x + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of @n.
 * @n: The number to get the square root of.
 *
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (!n)
		return (n);
	if (n == 1)
		return (n);

	return (get_sqrt(n, 0));
}

