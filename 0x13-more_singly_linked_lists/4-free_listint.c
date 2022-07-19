#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - a function that frees the allocated space
 * @head: pointer
 */
void  free_listint(listint_t *head)
{
if (head == NULL)
{
free(head);
}
else
{
while (head != NULL)
{
listint_t *p = head;
head = head->next;
free(p);
p = NULL;
}
}
}
