#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: shows the first node in the list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *init = NULL;
	listint_t *sec = NULL;

	while (*head)
	{
		sec = (*head)->next;
		(*head)->next = init;
		init = *head;
		*head = sec;
	}

	*head = init;

	return (*head);
}
