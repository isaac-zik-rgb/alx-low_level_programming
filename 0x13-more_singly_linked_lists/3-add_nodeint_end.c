
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add a new node at the end of the struct list
 * @head: a double pointer to the node of the first list
 * @n: the data of the first node
 *
 * Return: the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
  listint_t *temp;
  listint_t *ptr = *head;
  temp = malloc(sizeof(listint_t));
  if (temp == NULL)
    return (NULL);
  temp->n = n;
  temp->next = NULL;
  if (*head == NULL)
    {
      *head = temp;
      return (temp);
    }
  while (ptr->next)
    ptr = ptr->next;
  ptr->next = temp;
  return (temp);
}
