#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- to be read toSTDOUT.
 * @filename: text file to be read
 * @letters: letters to read and print
 * Return: number of letters it could read and print else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *aaa;
	ssize_t b;
	ssize_t c;
	ssize_t d;

	b = open(filename, O_RDONLY);
	if (b == -1)
		return (0);
	aaa = malloc(sizeof(char) * letters);
	d = read(b, aaa, letters);
	c = write(STDOUT_FILENO, aaa, d);

	free(aaa);
	close(b);
	return (c);
}
