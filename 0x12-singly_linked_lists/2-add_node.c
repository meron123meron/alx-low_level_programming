#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * @head: pointer to a pointer
 * @str: pointer
 * Return: NULL or pointer
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *p = malloc(sizeof(list_t));
if (p == NULL)
{
return (NULL);
}
p->str = strdup(str);
p->next = NULL;

p->next = *head;
*head = p;
return (*head);
}
