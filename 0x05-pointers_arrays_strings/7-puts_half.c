#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i, j, l;

	l = 0;

	for (i = 0; str[i] != '\0'; i++)
		l++;

	j = (l / 2);

	if ((l % 2) == 1)
		j = ((l + 1) / 2);

	for (i = j; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
