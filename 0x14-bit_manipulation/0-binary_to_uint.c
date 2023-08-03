#include "main.h"

/**
 * binary_to_uint - function that converts binary number to unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: the converted number else 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int value = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		value = 2 * value + (b[a] - '0');
	}

	return (value);
}
