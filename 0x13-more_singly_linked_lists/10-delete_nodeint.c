#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at a certain position
 * @head: a pointer to the first node of the list
 * @index: index of the node to delete
 *
 * Return: 1 (success) or -1(failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
  listint_t *temp = *head;
  listint_t *current = NULL;
  unsigned int n = 0;
  if (*head == NULL)
    return (-1);
  if (index == 0)
    {
      *head = (*head)->next;
      free(temp);
      return (1);
    }
  while (n < index - 1)
    {
      if (!temp || !(temp->next))
	return (-1);
      temp = temp->next;
      n++;
    }
  current = temp->next;
  temp->next = current->next;
  free(current);
  return (1);
}
