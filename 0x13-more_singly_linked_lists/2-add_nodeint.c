#include "lists.h"

/**
 * add_nodeint - adds a node at the start of a linked list
 * @head: points to first node in the list
 * @n: data to insert in that new node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	nw->next = *head;
	*head = nw;

	return (nw);
}
