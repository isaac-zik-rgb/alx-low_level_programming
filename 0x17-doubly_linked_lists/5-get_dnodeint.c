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
  unsigned int count = 0;
  dlistint_t *current = head;

  if (current == NULL)
    return (NULL);

  while(head->prev != NULL)

    head = head->prev;


  while (current != NULL)
    {
      if (count == index)
	break;
      current = current->next;
      count++;
    }
  return (current);
}
