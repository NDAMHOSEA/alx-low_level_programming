#include "main.h"

/**
 * get_bit - Prints value of a bit at an index as a decimal number
 * @n: Points to number
 * @index: Index
 *
 * Return: On success value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
