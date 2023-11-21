#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *b = h;
	unsigned int len = 0;

	while (b)
	{
		len++;
		b = b->next;
	}
	return (len);
}
