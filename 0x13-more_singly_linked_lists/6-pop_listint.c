#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the first(head) node
 * @head: pointer
 * Return: n(head node's data)
 */
int pop_listint(listint_t **head)
{
int d = (*head)->n;
if (*head == NULL)
{
return (0);
}
else
{
listint_t *p = *head;
(*head) = (*head)->next;
free(p);
}
return (d);
}
