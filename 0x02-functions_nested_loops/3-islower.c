#include "main.h"
/**
  * main - Entry point
  * Description: Function that checks for lowercase
  * Return: Always 0.
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
