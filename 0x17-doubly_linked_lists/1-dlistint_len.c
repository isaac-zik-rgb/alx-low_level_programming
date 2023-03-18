#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - return number of elements in link list
 * @h: a pointer to the first node of the list
 *
 * Return: Total number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
 
while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
