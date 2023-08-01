#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: points to the linked list we're finding
 * Return: address of the node where the loop starts else NULL where no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head;
	listint_t *sec = head;

	if (!head)
		return (NULL);

	while (first && sec && sec->next)
	{
		sec = sec->next->next;
		first = first->next;
		if (sec == first)
		{
			first = head;
			while (first != sec)
			{
				first = first->next;
				sec = sec->next;
			}
			return (sec);
		}
	}

	return (NULL);
}
