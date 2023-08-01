#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * at a particular index
 * @head: shows first element in the list
 * @index: index of the node to delete
 * Return: 1 on success and -1 on fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new = *head;
	listint_t *initial = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}

	while (a < index - 1)
	{
		if (!new || !(new->next))
			return (-1);
		new = new->next;
		a++;
	}


	initial = new->next;
	new->next = initial->next;
	free(initial);
	return (1);
}
