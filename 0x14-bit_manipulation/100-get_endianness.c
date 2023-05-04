#include "main.h"

/**
 * get_endianness - Checks whether a machine
 * is small or big endian
 * Return: 0 if big, & 1 when small
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *) &k;

	return (*c);
}

