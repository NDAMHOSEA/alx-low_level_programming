#include "main.h"

/**
 * create_file - This function creates a new file.
 * @filename: Points to the filename to be create.
 * @text_content: Points to the string to write.
 *
 * Return: - -1 upon failure.
 *         else - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int file, n, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(file, text_content, len);

	if (file == -1 || n == -1)
		return (-1);

	close(file);

	return (1);
}
