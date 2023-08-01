#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: points to first node in the linked list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int dif;
	listint_t *new;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			new = (*h)->next;
			free(*h);
			*h = new;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
