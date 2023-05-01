#include "lists.h"

/**
 * listint_len -Will return the number of Linked list elements
 * @h: List type listint_t to bypass
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
