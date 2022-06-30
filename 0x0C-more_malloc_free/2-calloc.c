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
int *p = NULL;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
p = calloc(nmemb, sizeof(size));
if (p == NULL)
{
return (NULL);
}
else
{
return (p);
}
free(p);
}
