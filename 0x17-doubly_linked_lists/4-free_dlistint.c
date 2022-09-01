#include "lists.h"
/**
 * free_dlistint - frees the allocated space
 * @head: pointer
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *p;
while (head != NULL)
{
p = head->next;
free(head);
head = p;
}
}
