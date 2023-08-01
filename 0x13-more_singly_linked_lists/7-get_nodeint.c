#include "lists.h"

/**
 * get_nodeint_at_index - returns node to a particular index in a linked list
 * @head: leading node in the linked list
 * @index: of a node to return
 * Return: lead to node insearch else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *new = head;

	while (new && a < index)
	{
		new = new->next;
		a++;
	}

	return (new ? new : NULL);
}
