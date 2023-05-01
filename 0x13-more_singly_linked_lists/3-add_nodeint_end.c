#include "lists.h"

/**
 * add_nodeint_end - Includes a new node at the end of a linked list
 * @head: Points to the first element of the linked list
 * @n: Information to be inserted in the new element
 *
 * Return: Points to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
