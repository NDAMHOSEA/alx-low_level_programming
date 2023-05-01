#include "lists.h"

/**
 * print_listint - Prints Out the all linked list elements
 * @h: Indicates the list type listint_t to be printed
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
