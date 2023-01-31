#include <stdlib.h>
#include "lists.h"
/**
 *listint_len - count the numbers numbers of elements in the list
 * @h: a pointer to tge first node of the list
 *
 * Return: number of element in a link list
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
