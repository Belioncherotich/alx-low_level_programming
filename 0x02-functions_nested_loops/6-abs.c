#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *
 * Description: Returns the absolute value of the given integer.
 *
 * @i: The integer to compute the absolute value of
 *
 * Return: The absolute value of the integer.
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
