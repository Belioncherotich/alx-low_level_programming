#include "main.h"

/**
 * get_bit - gives value of a bit at a given index.
 * @n: number in search
 * @index: index of the bit and starts from 0
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b_value;

	if (index > 63)
		return (-1);

	b_value = (n >> index) & 1;

	return (b_value);
}
