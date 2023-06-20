#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * Checks if the number is positive, negative, or zero
 * and prints the corresponding sign.*
 * @n: The number to be checked
 * Return: 1 if the number is positive, -1 if it's negative, 0 if it's zero.
 */
int print_sign(int n)
{
    if (n > 0)
    {
        _putchar(43);
        return (1);
    }
    else if (n < 0)
    {
        _putchar(45);
        return (-1);
    }
    else
    {
        _putchar(48);
        return (0);
    }
    _putchar('\n');
}
