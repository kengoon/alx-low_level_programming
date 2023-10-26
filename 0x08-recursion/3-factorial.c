
#include "main.h"

/**
 * factorial - factorial of a given number.
 * @n: input number.
 * Return: factorial of the number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (!n)
		return (1);
	else
		return (n * factorial(n - 1));
}
