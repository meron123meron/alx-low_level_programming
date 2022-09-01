#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data(n) of a d..linked list
 * @head: pointer
 * Return: integer
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *p;
p = head;

while (p != NULL)
{
sum = sum + p->n;
p = p->next;
}
return (sum);
}
