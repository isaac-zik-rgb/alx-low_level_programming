#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - add a new node at begging of the list
 * @head: a head pointer to tge first node in the list
 * @str: a data in the struct list
 *
 *Return: a pointer to the new address
 */
list_t  *add_node(list_t **head, const char *str)
{
  list_t *new;
  unsigned len = 0;
  while(str[len])
    len++;
  
 new = malloc(sizeof(list_t));
  if (new == NULL)
    return (NULL);
  new->str = strdup(str);
  new->len = len;
  new->next = NULL;
  new->next = (*head);
  (*head) = new;
  return (new);
}
