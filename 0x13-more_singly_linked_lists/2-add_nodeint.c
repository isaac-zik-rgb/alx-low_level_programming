#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - add a node in the begining of the struct list
 * @head: a head pointer to the list node
 *@n: the data of the list
 * Return: the address of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr;
ptr = malloc(sizeof(listint_t));
if (ptr == NULL)
return (NULL);
ptr->n = n;
ptr->next = NULL;
ptr->next = (*head);
*head = ptr;
return (*head);
}
