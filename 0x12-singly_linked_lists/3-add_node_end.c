
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - add a node at end of the list
 * @head: a head pointer to the first node list
 * @str: a data to be filled in the list
 *
 * Retrun: a pointer to the address of the last node
 */
list_t  *add_node_end(list_t **head, const char *str)
{
  unsigned int len = 0;
  list_t *ptr, *temp;
   ptr = (*head);
  while (str[len])
    len++;
  temp = malloc(sizeof(list_t));
  if (temp == NULL)
    return (NULL);
  temp->str = strdup(str);
  temp->len = len;
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
