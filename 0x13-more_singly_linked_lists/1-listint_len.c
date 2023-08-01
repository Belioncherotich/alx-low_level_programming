#include "lists.h"

/**
 * listint_len - returns elements in a linked lists
 * @h: links type listint_t to traverse
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nm = 0;

	while (h)
	{
		nm++;
		h = h->next;
	}

	return (nm);
}
