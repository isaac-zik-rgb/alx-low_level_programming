#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint - get the node of a given index
 * @head: a pointer to the first node
 * @index: the node to get
 * Return: then nth node of the list or NULL if failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
  dlistint_t *current = head;
  unsigned int count = 0;

  if(!index)
    return (NULL);
  while(count != index)
    {
      current = current->next;
      count++;
    }
  return (current);
}
