#include "lists.h"

/**
 * reverse_listint - Prints a linked list in reverse/backwards
 * @head: Indicates the first node element in the listint_t
 *
 * Return: points the first node element in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
