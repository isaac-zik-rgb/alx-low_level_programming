#include <stdlib.h>
#include "lists.h"

/**
 * list_len - prints number of element in a list
 * @h: a head pointer to the struct list
 *
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
