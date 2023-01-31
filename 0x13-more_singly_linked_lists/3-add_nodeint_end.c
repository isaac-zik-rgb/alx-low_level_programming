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
  listint_t *ptr, *temp;
  int count = 0;
  ptr = (*head);
  temp = malloc(sizeof(listint_t));
  if (ptr == NULL)
  return (NULL);
  while (ptr->next != NULL)
    {
      ptr = ptr->next;
      count++;
    }
  temp->n = n;
  temp->next = NULL;
  ptr->next = temp;
  return (temp);
}
