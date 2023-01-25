#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - this is the insertion algorithm
 * @list: the list to sort
 * current: used for iterating
 * temp: used for swapping
 * Return: 0 always
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;
	listint_t *temp = NULL;

	if (list == NULL || *list == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		temp = current;
		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			temp->prev->next = temp->next;
			if (temp->next != NULL)
			{
				temp->next->prev = temp->prev;
				temp->next = temp->prev;
				temp->prev = temp->prev->prev;
				temp->next->prev = temp;
				if (temp->prev != NULL)
				{
					temp->prev->next = temp;
				}
				else
					*list = temp;
				print_list(*list);
			}
		}
		current = current->next;
	}

}
