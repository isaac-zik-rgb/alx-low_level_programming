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
  dlistint_t *current = *head;
  dlistint_t *end_node;

  dlistint_t *tail;

  
  end_node = malloc(sizeof(dlistint_t));
  if (end_node == NULL)
    return (NULL);

  end_node->n = n;
  end_node->next = NULL;

  while (current->next != NULL)
    {
      current = current->next;
    }
  current->next = end_node;
  end_node->prev = current;
  tail = end_node;
  return (tail);
}
