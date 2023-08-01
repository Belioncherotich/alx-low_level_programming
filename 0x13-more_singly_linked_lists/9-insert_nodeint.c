#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * @head: shows the first node in the list
 * @idx: index where the new node is placed
 * @n: data to input into new node
 * Return: the address of the new node else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *nw;
	listint_t *holder = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw || !head)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (idx == 0)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
	}

	for (a = 0; holder && a < idx; a++)
	{
		if (a == idx - 1)
		{
			nw->next = holder->next;
			holder->next = nw;
			return (nw);
		}
		else
			holder = holder->next;
	}

	return (NULL);
}
