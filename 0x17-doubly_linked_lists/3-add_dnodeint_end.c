#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a double link list
 * @head: a double pointer to the first node of the list
 * @n: a data in the list
 *
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
  dlistint_t *tail = *head;
  dlistint_t *end_node;
  end_node = malloc(sizeof(dlistint_t));
  if (end_node == NULL)
    return (NULL);

  end_node->n = n;
  end_node->next = NULL;
  end_node->prev = NULL;

  while (tail->prev != NULL)
    tail = tail->prev;

  while (tail != NULL)
    {
      tail = tail->next;
    }
  tail->next = end_node;
  end_node-prev = tail;
  return (tail);
}
