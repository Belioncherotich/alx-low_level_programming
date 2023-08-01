#include "lists.h"

/**
 * pop_listint - eliminates head node of linked list
 * @head: directs to first element in the linked list
 * Return: 0 if the list is empty else data in the eliminated list
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int dt;

	if (!head || !*head)
		return (0);

	dt = (*head)->n;
	new = (*head)->next;
	free(*head);
	*head = new;

	return (dt);
}
