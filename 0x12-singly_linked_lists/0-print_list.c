#include <stdio.h>
#include "lists.h"
/**
 * print_list - print the elements of the node
 *@h: a head pointer to the first node of the list
 *
 * Return: numbers of nodes
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
count++;
}
return (count);
}
