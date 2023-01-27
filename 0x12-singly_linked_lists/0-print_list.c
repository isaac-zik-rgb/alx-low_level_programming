#include <stdio.h>
#include "lists.h"
/**
 * print_list - print the elements of the node
 * @h - a singly link list
 *
 * Return: numbers of nodes
 */
size_t print_list(const list_t *h)
{
  unsigned int count = 0;
  if (h != NULL)
    {
      if (h->str == NULL)
	{
	  printf("[0] (nil)\n");
	}
      while (h->next != NULL)
	  printf("[%d] %s\n", h->len, h->str);
      count++;
      h = h->next;
    }
  return (count);
}
