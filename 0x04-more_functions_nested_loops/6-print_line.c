#include "main.h"

/**
 * print_line - Draws a straight line.
 * @n: Number of times the line will be printed.
 *
 * Description: This function draws a straight line by printing underscores.
 *              If n is less than or equal to 0, it prints a newline character.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
