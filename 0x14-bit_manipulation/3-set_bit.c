#include "main.h"

/**
 * set_bit - sets bit at an index to 1
 * @n: shows a number to chang
 * @index: location of a bit to be set to 1
 * Return: 1 on correct else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
