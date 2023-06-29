#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The integer converted from the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	/* Handle the sign */
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Convert the numbers */
	while (s[i] >= '0' && s[i] <= '9')
	{
		/* Check for overflow */
		if ((result > INT_MAX / 10) || (result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
		{
			/* Return INT_MAX or INT_MIN based on the sign */
			return (sign == 1) ? INT_MAX : INT_MIN;
		}

		result = (result * 10) + (s[i] - '0');
		i++;
	}

	return result * sign;
}
