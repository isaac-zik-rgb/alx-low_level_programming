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
    dlistint_t *current = head;
    dlistint_t *temp;

    while (current != NULL)
      {
	temp = current;
	current = current->next;
	free(temp);
      }
    head = NULL;
}
