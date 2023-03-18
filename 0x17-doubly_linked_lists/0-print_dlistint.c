#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print the number of elements in the list
 * @h: a pointer to the first node of the list
 *
 * @Return: number of node in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
  size_t num = 0;
  while(h != NULL)
    {
      printf("%d\n", h->n);
      h = h->next;
      num++;
    }
  return (num);
}
