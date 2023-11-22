#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *m;
	listint_t *n;

	m = NULL;
	n = NULL;

	while (*head)
	{
		n = (*head)->next;
		(*head)->next = m;
		m = *head;
		*head = n;
	}

	*head = m;
	return (*head);
}
