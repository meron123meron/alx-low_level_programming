#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer
 * @index: integer
 * Return: pointer or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *p;
unsigned int i = 0;

p = head;
if (head == NULL)
return (NULL);

while (i != index)
{
p = p->next;
i++;
}
return (p);
}
