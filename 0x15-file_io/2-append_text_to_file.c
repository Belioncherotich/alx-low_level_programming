#include "main.h"

/**
 * append_text_to_file - Add text at the end of file.
 * @filename: Shows the name of the file.
 * @text_content: to be added to the end of the file.
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, str = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (str = 0; text_content[str];)
			str++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, str);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}
