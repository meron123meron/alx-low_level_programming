#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: pointer to a pointer
 * @n: integer
 * Return: NULL or pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *w;
w = malloc(sizeof(listint_t));
w->n = n;
w->next = NULL;
w->next = *head;
*head = w;
return (*head);
}
