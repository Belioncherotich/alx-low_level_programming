#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int n = 0;
	char *m = str;
	int o;

	while (*m != '\0')
	{
		m++;
		longi++;
	}
	n = longi - 1;
	for (o = 0 ; o <= n ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
