#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - a function that frees the allocated space
 * @head: pointer
 */
void  free_listint(listint_t *head)
{
while (head != NULL)
{
head = head->next;
free(head);
}
if (head == NULL)
{
free(head);
}
}
