#include "sort.h"
#include <stdio.h>

void insertion_sort_list(listint_t **list) {
    listint_t *current, *temp;

    if (list == NULL || *list == NULL)
        return;

    current = (*list)->next;
    while (current != NULL) {
        temp = current;
        while (temp->prev != NULL && temp->n < temp->prev->n) {
            temp->prev->next = temp->next;
            if (temp->next != NULL)
                temp->next->prev = temp->prev;
            temp->prev = temp->prev->prev;
            temp->next = temp->prev->next;
            temp->prev->next = temp;
            if (temp->next != NULL)
                temp->next->prev = temp;
            printf("Doubly linked list after swap: ");
            print_list(*list);
            temp = temp->prev;
        }
        current = current->next;
    }
}
