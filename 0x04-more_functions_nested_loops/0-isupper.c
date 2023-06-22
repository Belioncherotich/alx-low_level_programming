#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c - The character to be checked
 * Return: 1 for uppercase else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else 
		return (0);
}
