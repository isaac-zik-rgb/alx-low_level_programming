#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees the memory of a link list
 * @head: a pointer to free
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
  dlistint_t *temp = head;

  if (head != NULL)

    while (head->next != NULL)
      {
	head = head->next;
      }
  while (head != NULL)
    {
      head = head->prev;
    }
  free(head);
  free(temp);
}
