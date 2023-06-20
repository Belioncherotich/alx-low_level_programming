#include <stdio.h>
#include "main.h"
/**
  * main - Entry point
  * Description:  prints all natural numbers from n to 98
  * Return: Numbers
  */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
		}
	}
	else
    {
        for (i = n; i >= 98; i--)
        {
            if (i != 98)
                printf("%d, ", i);
        }
    }

    printf("98\n");
}
