#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: a pointer to the node of the list
 *
 *Return : a pointer to tge first node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
 listint_t *prev = NULL;
 listint_t *next = NULL;

 while (*head)
 {
 next = (*head)->next;
 (*head)->next = prev;
 prev = *head;
 *head = next;
 }

 *head = prev;

 return (*head);
}
