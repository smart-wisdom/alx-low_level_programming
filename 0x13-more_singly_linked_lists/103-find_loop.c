#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: pointer searching for te nodes of the linked list
 * Return: he address of the node where the loop starts, or
 * NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *search1 = head;
	listint_t *search2 = head;

	if (!head)
		return (NULL);

	while (search1 && search2 && search2->next)
	{
		search2 = search2->next->next;
		search1 = search1->next;
		if (search2 == search1)
		{
			search1 = head;
			while (search1 != search2)
			{
				search1 = search1->next;
				search2 = search2->next;
			}
			return (search2);
		}
	}

	return (NULL);
}
