#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 * @head: pointer to pointer
 * @str: pointer
 * Return: list_t value
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *p, *m;
p = malloc(sizeof(list_t));
m = *head;
if (p == NULL)
{
return (NULL);
}
p->str = strdup(str);
p->len = strlen(str);
p->next = NULL;
if (*head == NULL)
{
*head = p;
}
else
{
while (m->next != NULL)
{
m = m->next;
}
m->next = p;
}
return (p);
}
