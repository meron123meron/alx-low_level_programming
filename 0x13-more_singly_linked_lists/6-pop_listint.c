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
listint_t *p = *head;
int d = (*head)->n;
if (*head == NULL)
{
return (0);
}

(*head) = (*head)->next;
free(p);
p = NULL;
return (d);
}
