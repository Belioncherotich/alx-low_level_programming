#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int ind = 0;

	while (str[ind])
	{
		while (!(str[ind] >= 'a' && str[ind] <= 'z'))
			ind++;

		if (str[ind - 1] == ' ' ||
		    str[ind - 1] == '\t' ||
		    str[ind - 1] == '\n' ||
		    str[ind - 1] == ',' ||
		    str[ind - 1] == ';' ||
		    str[ind - 1] == '.' ||
		    str[ind - 1] == '!' ||
		    str[ind - 1] == '?' ||
		    str[ind - 1] == '"' ||
		    str[ind - 1] == '(' ||
		    str[ind - 1] == ')' ||
		    str[ind - 1] == '{' ||
		    str[ind - 1] == '}' ||
		    ind == 0)
			str[ind] -= 32;

		ind++;
	}

	return (str);
}
