#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int c, b = 0;

	if (str == NULL)
		return (NULL);
	c = 0;
	while (str[c] != '\0')
		c++;

	aaa = malloc(sizeof(char) * (c + 1));

	if (aaa == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		aaa[b] = str[b];

	return (aaa);
}
