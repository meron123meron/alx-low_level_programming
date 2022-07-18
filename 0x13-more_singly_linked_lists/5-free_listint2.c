#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees the allocated space
 */
void free_listint2(listint_t **head)
{
listint_t *p;
head = NULL;
p = *head;
if (head == NULL)
{
free(head);
}
else
{
while (p != NULL)
{
p = p->next;
free(p);
}
}
}
