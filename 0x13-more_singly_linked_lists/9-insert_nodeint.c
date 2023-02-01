#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - add a new node at a certain position
 * @head: a pointer to the first node of the list
 * @idx:the position of tge new inserted node
 * @n: an element in the node
 *
 * Return: a pointer to the new node or NULL if fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int m;
listint_t *new_ptr;
listint_t *temp = *head;
new_ptr = malloc(sizeof(listint_t));
if (!new_ptr || !head)
return (NULL);
new_ptr->n = n;
new_ptr->next = NULL;
if (idx == 0)
{
new_ptr->next = *head;
*head = new_ptr;
return (new_ptr);
}
for (m = 0; temp && m < idx; m++)
{
if (m == idx - 1)
{
new_ptr->next = temp->next;
temp->next = new_ptr;
return (new_ptr);
}
else
temp = temp->next;
}
return (NULL);
}
