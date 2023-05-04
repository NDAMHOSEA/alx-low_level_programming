#include "main.h"

/**
 * set_bit - Points bit to a selected index to 1
 * @n: Points to number to be changed
 * @index: Points to the index of the bit to be set to 1
 *
 * Return: On success 1, & -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
