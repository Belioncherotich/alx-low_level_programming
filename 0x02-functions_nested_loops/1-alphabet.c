#include "main.h"

/**
 * print_alphabet - Prints lowercase alphabets
 *
 * Description: Prints all lowercase alphabets from 'a' to 'z'
 *              followed by a newline character.
 */
void print_alphabet(void)
{
    int i;

    for (i = 97; i <= 122; i++)
    {
        _putchar(i);
    }
    _putchar('\n');
}
