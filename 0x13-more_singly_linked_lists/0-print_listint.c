#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *b = h;
	unsigned int len = 0;

	while (b)
	{
		printf("%d\n", b->n);
		b = b->next;
		len++;
	}
	return (len);
}
