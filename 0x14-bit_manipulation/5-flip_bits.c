#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip
 * so as to get from one number to another
 * @n: number 1
 * @m: number 2
 * Return: bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, cnt = 0;
	unsigned long int now;
	unsigned long int to_get = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		now = to_get >> a;
		if (now & 1)
			cnt++;
	}

	return (cnt);
}
