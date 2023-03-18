#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a list
 * @head: a pointer to the first node of the list
 *
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  dlistint_t *new = (*head);
  dlistint_t *temp;
  temp = malloc(sizeof(dlistint_t));
  if (temp == NULL)
    return (NULL);

  temp->n = n;
  temp->next = NULL;
  temp->prev = NULL;

  while(new != NULL)
    {
      temp->next = (*head);
      (*head)->prev = temp;
      new = temp;
    }
  return (new);
}
