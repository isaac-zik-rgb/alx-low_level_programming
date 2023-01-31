#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - get the ninth node of the list
 * @head: a pointer to the first node
 * @index: the node indext of the list
 * Return: the index node of the list NULL if fails
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
  unsigned int n = 0;
  listint_t *temp = head;
  while (temp && n < index)
    {
      temp = temp->next;
      n++;
    }
  return (temp ? temp : NULL);
}
