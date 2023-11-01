#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: size of the array to create
 * @c: char storage
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *chr;
	unsigned int m;

	chr = malloc(sizeof(c) * size);

	if (!size || !chr)
		return (NULL);
	for (m = 0; m < size; m++)
		chr[m] = c;
	return (chr);
}

