#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - reverses a list
 * @head: pointer to a pointer
 * Return: a pointer
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *p, *g;
p = NULL;
g = NULL;
if (*head == NULL)
{
free(head);
return (NULL);
}
while (*head != NULL)
{
g = (*head)->next;
(*head)->next = p;
p = *head;
*head = g;
}
*head = p;
return (*head);
}
