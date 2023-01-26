#include "sort.h"

/**
 * insertion_sort_list - this is the insertiin sort algoritm
 * @list: list to sort
 * Return: 0 always
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *swap;

	if (list == NULL || *list == NULL)
		return;

	current = (*list)->next;
	while (current)
	{
		temp = current;
	while (temp->prev && temp->prev->n > temp->n)
	{
		swap = temp->prev;
		temp->prev = temp->prev->prev;
		swap->next = temp->next;
		swap->prev = temp;
		temp->next = swap;
		if (temp->prev)
			temp->prev->next = temp;
		else
			*list = temp;
		if (swap->next)
			swap->next->prev = swap;
		print_list(*list);
		}
		current = current->next;
	}
}
