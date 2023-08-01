#include "lists.h"

/**
 * sum_listint - calculates sum of all the data in listint_t list
 * @head: preceding node in linked list
 * Return: Sum generated
 */
int sum_listint(listint_t *head)
{
	int sm = 0;
	listint_t *new = head;

	while (new)
	{
		sm += new->n;
		new = new->next;
	}

	return (sm);
}
