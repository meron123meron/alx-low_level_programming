#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: integer used
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
int *p;
p = malloc(b);
if (p != NULL)
{
return (p);
}
else
free(p);
exit (98);
}
