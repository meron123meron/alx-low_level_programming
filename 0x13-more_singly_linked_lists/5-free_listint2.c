#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees the allocated space
 * @head: pointer to a pointer
 */
void free_listint2(listint_t **head)
{
listint_t *p;
if (head == NULL)
{
free(head);
}
else
{
while (*head != NULL)
{
p = (*head);
(*head) = (*head)->next;
free(p);
p = NULL;
}
}
}
