#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to a pointer
 * @n: integer
 * Return: pointer or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *p, *t;
p = malloc(sizeof(dlistint_t));
if (p == NULL)
return (NULL);

p->n = n;
p->next = NULL;
p->prev = NULL;

if (*head == NULL)
{
*head = p;
return (p);
}

t = *head;
while (t->next != NULL)
t = t->next;

t->next = p;
p->prev = t;
return (p);
}
