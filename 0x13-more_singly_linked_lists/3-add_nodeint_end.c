#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: points to first element in the list
 * @n: data to input into new element
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *tempo = *head;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}

	while (tempo->next)
		tempo = tempo->next;

	tempo->next = nw;

	return (nw);
}
