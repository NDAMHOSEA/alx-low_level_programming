#include "main.h"

/**
 * clear_bit - Clears value of given bit to 0
 * @n: Points value to be cleared
 * @index: Points index of bit to be cleared
 * Return: On success 1, & -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
