#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - get all tge sum of tge data (n) in the limked list
 * @head: a pointer to the first node of the list
 * Return: the sum of the n data in the node
 */
int sum_listint(listint_t *head)
{
listint_t *temp = head;
int sum = 0;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
