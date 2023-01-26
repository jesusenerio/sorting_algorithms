#include "sort.h"

/**
 * insertion_sort_list - the insertion sort algorithm
 * @list: the list to sort
 * current: use to iterate
 * temp: use for swapping
 * Return: 0 always
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *temp;

	if (*list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		temp = current->prev;
		while (temp != NULL && temp->n > current->n)
		{
			/* Swap the current and prev nodes */
			current->prev = temp->prev;
			if (temp->prev != NULL)
				temp->prev->next = current;
			temp->prev = current;
			temp->next = current->next;
			if (current->next != NULL)
				current->next->prev = temp;
			current->next = temp;
			/* Print the list */
			print_list(*list);
			temp = current->prev;
		}
		if (current->prev == NULL)
			*list = current;
		current = current->next;
	}
}
