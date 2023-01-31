#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - create a new head node and delete the first node
 * @head: a pointer to the first node of the list
 *
 * Return: n data of the node or 0 if fails
 */
int pop_listint(listint_t **head)
{
int data;
listint_t *ptr;
if (*head == NULL || *head == NULL)
return (0);
data = (*head)->n;
ptr = (*head)->next;
free(*head);
*head = ptr;
return (data);
}
