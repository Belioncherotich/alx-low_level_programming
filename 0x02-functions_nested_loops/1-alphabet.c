#include "main.h"
/**
  * main - Entry point
  * Description: Prints all lowercase alphabets from 'a' to 'z'
  * followed by a newline character.
  * Return: Always 0 (Success)
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
