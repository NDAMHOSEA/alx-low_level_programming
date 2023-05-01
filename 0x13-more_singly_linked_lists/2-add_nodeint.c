#include "lists.h"

/**
 * add_nodeint - Adds node at the start of a linked list
 * @head: Points to the first node of the list
 * @n: Information to insert in that new node
 *
 * Return: Points to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
