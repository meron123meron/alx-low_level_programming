#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the last(Nth) node
 * @head: pointer
 * @index: is index of the node, it starts at zero
 * Return: NULL or node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
if (head == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < index; i++)
{
head = head->next;
}
}
return (head);
}
