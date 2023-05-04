#include <unistd.h>
#include "main.h"

/**
 * _putchar - This function prints char c to standard output
 * @c: Char to be printed
 *
 * Return: Returns 1 upon success .
 * On error, return -1, and errnum set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
