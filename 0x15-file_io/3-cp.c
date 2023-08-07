#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - that will have 1024 bytes.
 * @file: name of file buffer holding char.
 *
 * Return: currently allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - end description of file.
 * @d: descriptor to be closed.
 */
void close_file(int d)
{
	int a;

	a = close(d);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
		exit(100);
	}
}

/**
 * main - Copy contents of a file to another.
 * @argc: arguments supplied to the program.
 * @argv: An array directing to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: incorrect arguments exit with code 97.
 * Where file_from does not exist or cannot be read - exit code 98.
 * Where file_to cannot be created or written to exit with code 99.
 * Where file_to or file_from cannot be closed exit with code 100.
 */
int main(int argc, char *argv[])
{
	int f, t, a, b;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	f = open(argv[1], O_RDONLY);
	a = read(f, buf, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f == -1 || a == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		b = write(t, buf, a);
		if (t == -1 || b == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		a = read(f, buf, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (a > 0);
	free(buf);
	close_file(f);
	close_file(t);
	return (0);
}
