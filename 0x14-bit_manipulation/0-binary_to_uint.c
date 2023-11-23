#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int m = 0;
	int len, _base;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
		;

	for (len--, _base = 1; len >= 0; len--, _base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] & 1)
			m += _base;
	}

	return (m);
}
