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

typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;
size_t print_list(const list_t *h)
{
int c = 0;
while (h != NULL)
{
c++;
h = h->next;
}
return (c);
}
