#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end
 * @head: pointer to a pointer
 * @n: integer
 * Return: NULL or pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *s, *p;
p = *head;
s = malloc(sizeof(listint_t));
if (s == NULL)
return (NULL);

s->n = n;
s->next = NULL;
if (*head == NULL)
{
*head = s;
return (s);
}
while (p->next != NULL)
{
p = p->next;
}
p->next = s;
return (s);
}
