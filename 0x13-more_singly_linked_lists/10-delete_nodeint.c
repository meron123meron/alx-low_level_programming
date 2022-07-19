#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a list
 * @head: pointer to a pointer
 * @index: index of the node that will be deleted
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *p;
listint_t *g;
p = *head;
g = *head;
if (*head == NULL || head == NULL)
{
return (-1);
}
else if (index == 0)
{
*head = p->next;
free(p);
p = NULL;
}
else
{
while (index != 0)
{
g = p;
p = p->next;
index--;
}
g->next = p->next;
free(p);
p = NULL;
}
return (1);
}
