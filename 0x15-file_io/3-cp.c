#include <stdio.h>
#include <stdlib.h>
#include "main.h"


char *create_buffer(char *file);
void close_file(int hd);

/**
 * create_buffer - This function allocates space for a buffer.
 * @file: Buffer file storing chararacters.
 *
 *
 * Return: Points to newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Close descriptors of the file.
 * @fd: Points to the file descriptor of the file.
 *
 */
void close_file(int hd)
{
	int k;

	k = close(hd);

	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close hd %d\n", hd);
		exit(100);
	}
}

/**
 * main - Copy content from one file to another
 * @argc: Arg supplied to the program.
 * @argv: Pointers to the arguments.
 *
 * Return: upon success 0.
 *
 * Description: if argc is incorrect - exit code 97.
 * Copy file_from does not exist/cannot be read - exit code 98.
 * Copy file_to cannot be created/written into - exit code 99.
 * Copy file_to or file_from won't close - exit code 100.
 */
int main(int argc, char *argv[])
{
	int  k, c, from, to;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || k == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		c = write(to, buffer, k);
		if (to == -1 || c == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		k = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (k > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
