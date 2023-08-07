#include "main.h"

/**
 * create_file - generates a file.
 * @filename: name of the file to generate.
 * @text_content: string to be written onto the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int d, b, str = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (str = 0; text_content[str];)
			str++;
	}

	d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(d, text_content, str);

	if (d == -1 || b == -1)
		return (-1);

	close(d);

	return (1);
}
