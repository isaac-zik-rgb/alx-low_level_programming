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
  if (head != NULL)
    free(head);
  head = NULL;
}
