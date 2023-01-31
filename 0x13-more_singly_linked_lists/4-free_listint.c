#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees the memory in the node list
 * @head: a pointer to the node
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
listint_t *ptr;
while (head)
{
ptr = -head->next;
free(head);
head = ptr;
}
}
