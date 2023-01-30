#include <stdlib>
#include "lists.h"

/**
 * list_len - A function that gets the number of nodes of linked list
 * @h: head of the linked list
 * Return: number of elements
*/
size_t list_len(const list_t *h)
{
    size_t n = 0;

    while (h)
    {
        n++;
        h = h->next;

    }
    return (n);
}