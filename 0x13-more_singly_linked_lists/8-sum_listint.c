#include "lists.h"

/**
 * sum_listint - This function
 * calculates the sum of all the data in a listint_t
 * @head: POints node in the linked
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
