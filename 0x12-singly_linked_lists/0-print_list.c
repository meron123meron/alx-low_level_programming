#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t
 * @h: pointer
 *
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
size_t c = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
c++;
h = h->next;
}
else
{
printf("%s[%u]\n", h->str, h->len);
c++;
h = h->next;
}
}
return (c);
}
