#include <stdio.h>
/**
 * main -Print all possible combination of two numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;
	for (n = 48; n <= 56; n++)
	{
		for (n = 49; n <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	putchar('\n');
return 0;
}
