#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: pointer to the head of the listint_t
 * Return: If the list is not looped - 0
 * Otherwise - the number of nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *loop1, *loop2;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	loop1 = head->next;
	loop2 = (head->next)->next;

	while (loop2)
	{
		if (loop1 == loop2)
		{
			loop1 = head;
			while (loop1 != loop2)
			{
				nodes++;
				loop1 = loop1->next;
				loop2 = loop2->next;
			}

			loop1 = loop1->next;
			while (loop1 != loop2)
			{
				nodes++;
				loop1 = loop1->next;
			}

			return (nodes);
		}

		loop1 = loop1->next;
		loop2 = (loop2->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: pointer to the head of the listint_t
 * Return: the number of nodes in the list, If the function fails,
 * exit the program with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
