#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list: double pointer
 * Return: a function that sorts a doubly linked list of integers
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *prev;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next; /* Start from the second node */

	while (current)
	{
		temp = current;
		prev = current->prev;

		/* Move the current node to its correct position */
		while (prev && temp->n < prev->n)
		{
			/* Swap nodes */
			if (prev->prev)
				prev->prev->next = temp;
			temp->prev = prev->prev;

			prev->next = temp->next;
			if (temp->next)
				temp->next->prev = prev;

			temp->next = prev;
			prev->prev = temp;

			/* Update the head of the list if necessary */
			if (!temp->prev)
				*list = temp;
			/* Print the list after each swap */
			print_list(*list);
			/* Update pointers for the next comparison */
			prev = temp->prev;
		}
		current = current->next;
	}
}
