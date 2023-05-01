#include "lists.h"

/**
 * free_listint - A function that frees a linked list
 * @head: Points to the linked list type listint_t list to be freed
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
