#include <stdlib.h>
#include "main.h"


/**
 * read_textfile- This function reads textfile and prints textfile to STDOUT.
 * @filename: Points to the textfile being read
 * @letters: Counts number of chars to be read
 * Return: The actual number of bytes w- printes and read
 *        or 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t file;
	ssize_t h;
	ssize_t n;

	fd = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	n = read(file, buf, letters);
	h = write(STDOUT_FILENO, buf, n);

	free(buf);
	close(file);
	return (h);
}
