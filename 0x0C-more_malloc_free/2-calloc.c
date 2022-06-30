#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: elements of an array
 * @size: bytes of each element
 * Return: NULL or pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *p;
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
p = malloc(nmemb * size);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb; i++)
{
*((char *)(p) + i) = 0;
}
return (p);
}
