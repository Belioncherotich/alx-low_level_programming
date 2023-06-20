#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	times_table();
	return (0);
}

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = j * i;
			if (j == 0)
			{
				_putchar(k + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (k < 10)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((k / 10) + '0');
				}
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
