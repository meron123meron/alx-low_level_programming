#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - a function that returns the number of elements
 * @h:pointer
 * Return: size_t value
 */
size_t listint_len(const listint_t *h)
{
size_t c = 0;
while (h != NULL)
{
c++;
h = h->next;
}
return (c);
}
