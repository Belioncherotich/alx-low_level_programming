#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *aaa;
	int b, c;

	if (min > max)
		return (NULL);

	c = max - min + 1;

	aaa = malloc(sizeof(int) * c);

	if (aaa == NULL)
		return (NULL);

	for (b = 0; min <= max; b++)
		aaa[b] = min++;

	return (aaa);
}
