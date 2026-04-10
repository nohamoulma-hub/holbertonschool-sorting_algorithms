#include "sort.h"

/**
* insertion_sort_list - sorts a doubly linked list using insertion sort
* @list: pointer to the head of the list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;

	while (current)
	{
		temp = current;

		while (temp->prev && temp->n < temp->prev->n)
		{
			/* Swap temp with previous node */
			if (temp->next)
				temp->next->prev = temp->prev;

			temp->prev->next = temp->next;
			temp->next = temp->prev;
			temp->prev = temp->prev->prev;

			if (temp->prev)
				temp->prev->next = temp;
			else
				*list = temp;

			temp->next->prev = temp;

			print_list(*list);
		}

		current = current->next;
	}
}
