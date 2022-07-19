#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer
 * @idx:  is the index of the list where the new node should be added
 * @n: integer
 * Return: NULL or pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *p = *head;
listint_t *b = malloc(sizeof(listint_t));
b->n = n;
b->next = NULL;
while (idx != i)
{
p = p->next;
i++;
}
b->next = p->next;
p->next = b;
return (b);
}
