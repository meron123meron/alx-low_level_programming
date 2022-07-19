#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the data(n)
 * @head: pointer
 * Return: integer value
 */
int sum_listint(listint_t *head)
{
listint_t *p = head;
int sum = 0;
if (p == NULL)
{
return (0);
}
else
{
while (p != NULL)
{
sum = sum + p->n;
p = p->next;
}
}
return (sum);
}
