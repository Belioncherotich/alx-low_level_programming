#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - calculates the number of unique nodes
 * @head: points the head of the listint_t to check
 * Return: 0 if the list is not looped else number of uniques nodes
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *first, *sec;
	size_t nds = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	first = head->next;
	sec = (head->next)->next;

	while (sec)
	{
		if (first == sec)
		{
			first = head;
			while (first != sec)
			{
				nds++;
				first = first->next;
				sec = sec->next;
			}

			first = first->next;
			while (first != sec)
			{
				nds++;
				first = first->next;
			}

			return (nds);
		}

		first = first->next;
		sec = (sec->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: pointer to the head of the listint_t list.
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nds, idx = 0;

	nds = looped_listint_len(head);

	if (nds == 0)
	{
		for (; head != NULL; nds++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (idx = 0; idx < nds; idx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nds);
}
