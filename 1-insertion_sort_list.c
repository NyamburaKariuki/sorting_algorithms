#include "sort.h"

/**
* insertion_sort_list - sort array lements from min to max value
* @list: singly linked list
*/

void insertion_sort_list(listint_t **list)
{
listint_t *temp, *next, *previous;

if (*list == NULL || list == NULL || (*list)->next == NULL)
return;
temp = (*list)->next;
while (temp)
{
next = temp->next;
while (temp->prev && (temp->n < temp->prev->n))
{
previous = temp->prev;
temp->prev = previous->prev;
if (temp->prev)
temp->prev->next = temp;
else
*list = temp;
previous->next = temp->next;
if (previous->next)
previous->next->prev = previous;
temp->next = previous;
previous->prev = temp;
print_list(*list);
}
temp = next;
}
}

