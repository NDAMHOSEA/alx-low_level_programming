#include "main.h"

/**
 * binary_to_uint - This function converts bin to unsgn int
 * @b: string containing the binary number
 * Return: The number converted
 */
unsigned int binary_to_uint(const char *b)
{
	int l;
	unsigned int dec_value = 0;

	if (!b)
		return (0);

	for (l = 0; b[l]; l++)
	{
		if (b[l] < '0' || b[l] > '1')
			return (0);
		dec_value = 2 * dec_value + (b[l] - '0');
	}

	return (dec_value);
}
