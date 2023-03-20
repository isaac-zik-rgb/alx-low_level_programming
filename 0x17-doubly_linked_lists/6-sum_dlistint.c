#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - sum all the elements of the node
 * @head:a pointer to the first node
 *
 * Return: the sum of data else 0
 */

int sum_dlistint(dlistint_t *head)
{
  unsigned int sum = 0;
  if (head == NULL)
    return (0);

  
  while (head->prev != NULL)
    head = head->prev;

  while (head != NULL)
    {
      sum += head->n;
      head = head->next;
    }
  return (sum);
}
