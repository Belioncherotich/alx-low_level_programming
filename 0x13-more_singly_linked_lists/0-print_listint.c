#include "lists.h"

/**
 * print_listint - prints elements of linked list
 * @h: link list of listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nm = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nm++;
		h = h->next;
	}

	return (nm);
}
