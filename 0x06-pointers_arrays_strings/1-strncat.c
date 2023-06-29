#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int m;
	int o;

	m = 0;
	while (dest[m] != '\0')
	{
		n++;
	}
	o = 0;
	while (o < n && src[o] != '\0')
	{
	dest[m] = src[o];
	m++;
	o++;
	}
	dest[m] = '\0';
	return (dest);
}
