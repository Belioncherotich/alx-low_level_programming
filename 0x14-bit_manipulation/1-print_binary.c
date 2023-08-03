#include "main.h"

/**
 * print_binary - prints a number by its binary form.
 * @n: to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int a, cnt = 0;
	unsigned long int now;

	for (a = 63; a >= 0; a--)
	{
		now = n >> a;

		if (now & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
