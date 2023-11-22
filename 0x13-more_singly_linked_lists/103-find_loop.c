#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *h1 = head;
	listint_t *h2 = head;

	if (!head)
		return (NULL);

	while (h1 && h2 && h2->next)
	{
		h2 = h2->next->next;
		h1 = h1->next;
		if (h2 == h1)
		{
			h1 = head;
			while (h1 != h2)
			{
				h1 = h1->next;
				h2 = h2->next;
			}
			return (h2);
		}
	}

	return (NULL);
}
