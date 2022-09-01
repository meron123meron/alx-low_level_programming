#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer
 * @idx: unsigned integer
 * @n: integer
 * Return: pointer or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *p, *s;
p = *h;

if (idx == 0)
return (add_dnodeint(h, n));

for (i = 0; i != idx; i++)
{
if (p == NULL)
return (NULL);
p = p->next;
}
if (p == NULL)
return (add_dnodeint_end(h, n));
s = malloc(sizeof(dlistint_t));
if (s == NULL)
return (NULL);
s->n = n;
s->prev = p;
s->next = p->next;
p->next->prev = s;
p->next = s;
return (s);
}
