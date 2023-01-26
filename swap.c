#include "sort.h"
#include <stdio.h>
void swap(listint_t *node1, listint_t *node2) {
    if (!node1 || !node2)
        return;

    node1->prev->next = node2;
    node2->next->prev = node1;
    node1->next = node2->next;
    node2->prev = node1->prev;
    node1->prev = node2;
    node2->next = node1;
}
