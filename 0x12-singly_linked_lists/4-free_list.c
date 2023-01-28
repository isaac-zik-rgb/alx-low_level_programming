#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - frees the memory that on the list node
 * @head: a head pointer to access the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
list_t *temp;
while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
