#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line
 * @size: Size of the triangle
 *
 * Description:
 * This function prints a triangle using the # character,the size
 * parameter determines the number of rows in the triangle.If size
 * is 0 or less, the function prints only a new line.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
