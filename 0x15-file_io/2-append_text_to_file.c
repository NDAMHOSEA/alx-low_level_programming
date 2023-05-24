#include "main.h"

/**
 * append_text_to_file - This function appends text of a written file.
 * @filename: Points to the filename to be appended.
 * @text_content: Shows the string which needs to be added.
 *
 * Return: Return upon fail or filename is NULL - -1.
 *         If file does not exist and current user lacks write permissions - -1.
 *         else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int c, n, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	c = open(filename, O_WRONLY | O_APPEND);
	n = write(c, text_content, len);

	if (c == -1 || n == -1)
		return (-1);

	close(c);

	return (1);
}
